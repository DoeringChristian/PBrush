#include "mainwindow.h"

struct mainwindow *mainwindow_init(struct mainwindow *dst){
    dst->window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    dst->glarea = gtk_gl_area_new();

    gtk_window_set_default_size(dst->window, 1000, 1000);

    gtk_container_add(GTK_CONTAINER(dst->window), dst->glarea);

    g_signal_connect(dst->window, "destroy", G_CALLBACK(mainwindow_destroy_cb), dst);
    g_signal_connect(dst->glarea, "realize", G_CALLBACK(mainwindow_realize_cb), dst);
    //g_signal_connect(dst->glarea, "unrealize", G_CALLBACK(mainwindow_gla_unrealize_cb), dst);
    g_signal_connect(dst->glarea, "render", G_CALLBACK(mainwindow_render_cb), dst);
    g_signal_connect(dst->glarea, "resize", G_CALLBACK(mainwindow_resize_cb), dst);


    dst->canvas = malloc(sizeof(struct canvas));
    canvas_init(dst->canvas, vect2z(500,500), 1, dst->glarea);

    gtk_widget_show_all(dst->window);
}
void mainwindow_free(struct mainwindow *dst){
    canvas_free(dst->canvas);
    free(dst->canvas);
    dst->canvas = NULL;
    gtk_main_quit();
}

gboolean mainwindow_destroy_cb(GtkWidget *widget, gpointer data){
    mainwindow_free(data);
    return 0;
}


void mainwindow_realize_cb(GtkGLArea *area, gpointer data){
    struct mainwindow *mainwindow = data;
    gtk_gl_area_make_current(area);

    if(gtk_gl_area_get_error(area) != NULL)
        return;

    canvas_realize(mainwindow->canvas);
}
void mainwindow_resize_cb(GtkGLArea *area, gint width, gint height, gpointer data){
    struct mainwindow *mw = data;

    gtk_gl_area_make_current(area);
    glViewport(0, 0, width, height);
    //gtk_gl_area_queue_render(area);
    gtk_widget_queue_draw(GTK_WIDGET(area));

    mw->canvas->win_size.x = width;
    mw->canvas->win_size.y = height;

    g_print("resized\n");
}
gboolean mainwindow_render_cb(GtkGLArea *area, GdkGLContext *context, gpointer data){
    struct mainwindow *mainwindow = data;
    gtk_gl_area_make_current(area);

    canvas_render(mainwindow->canvas);

    g_print("render\n");

    glFlush();
    
    return TRUE;
}


