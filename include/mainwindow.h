#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gtk/gtk.h>
#include <epoxy/gl.h>
//#include <GL/gl.h>
#include "input.h"
#include "canvas.h"



struct mainwindow{
    GtkWidget *window;
    GtkWidget *glarea;

    GLuint position_buffer;
    GLuint program;

    struct canvas *canvas;
};

struct mainwindow *mainwindow_init(struct mainwindow *dst);
void mainwindow_free(struct mainwindow *dst);

gboolean mainwindow_destroy_cb(GtkWidget *widget, gpointer data);
void mainwindow_realize_cb(GtkGLArea *area, gpointer data);
void mainwindow_resize_cb(GtkGLArea *area, gint width, gint height, gpointer data);
gboolean mainwindow_render_cb(GtkGLArea *area, GdkGLContext *context, gpointer data);

#endif //MAINWINDOW_H
