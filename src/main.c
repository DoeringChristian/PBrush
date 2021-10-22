#include <string.h>
#include <stdio.h>
#include <math.h>
#include <gtk/gtk.h>
#include <epoxy/gl.h>
#include "mainwindow.h"
#include "layer.h"
#include "layer_paint.h"

int main(int argc, char **argv){
    gtk_init(&argc, &argv);

    struct mainwindow window;

    mainwindow_init(&window);

    g_print("test1\n");
    struct layer_paint lp;
    layer_paint_init(&lp, window.canvas, vect2z(100, 100), 1.0);
    canvas_push_layer(window.canvas, &lp.interface, 0);

    gtk_main();
}
