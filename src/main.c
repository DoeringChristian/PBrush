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

    struct layer_paint lp1;
    struct layer_paint lp2;

    layer_paint_init(&lp1, window.canvas, vect2z(500, 500), vect2f(0, 0), 1.0);
    layer_paint_img_load(&lp2, "res/img/test.png", window.canvas, vect2f(0, 0), 1.0);

    canvas_push_layer(window.canvas, &lp1.interface, 0);
    canvas_push_layer(window.canvas, &lp2.interface, 0);

    gtk_main();

    layer_free((struct layer *)&lp1);
    layer_free((struct layer *)&lp2);
}
