#pragma once
#ifndef INPUT_H
#define INPUT_H

#include "vect.h"
#include <gtk/gtk.h>
#include <gdk/gdk.h>

struct input_data{
    struct vect2d pos; uint8_t pos_rel;
    struct vect2d tilt; uint8_t tilt_rel;
    struct vect2d tan;
    struct vect2d norm;
    struct vect2d scroll; uint8_t scroll_rel;
    double press; uint8_t press_rel;
    double wheel; uint8_t wheel_rel;
    double dist; uint8_t dist_rel;
    double rot; uint8_t rot_rel;
    double slide; uint8_t slide_rel;
};

struct input_ctx{
    struct input_data data;
    GtkWidget *widget;
};

struct input_data *input_data_init(struct input_data *dst);
int input_data_update(struct input_data *dst, GdkEvent *event);

struct input_ctx *input_ctx_init(struct input_ctx *dst, GtkWidget *widget);
gboolean input_ctx_event_cb(GtkWidget *widget, GdkEvent *event, gpointer data);


#endif //INPUT_H
