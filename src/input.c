#include "input.h"

struct input_data *input_data_init(struct input_data *dst){
    *dst = (struct input_data){0};

    return dst;
}

int input_data_update(struct input_data *dst, GdkEvent *event){

    struct vect2d pos_tmp = dst->pos;
    struct vect2d tilt_tmp = dst->tilt;

    gdk_event_get_axis(event, GDK_AXIS_X, &dst->pos.x);
    gdk_event_get_axis(event, GDK_AXIS_Y, &dst->pos.y);

    gdk_event_get_axis(event, GDK_AXIS_XTILT, &dst->tilt.x);
    gdk_event_get_axis(event, GDK_AXIS_YTILT, &dst->tilt.x);

    gdk_event_get_axis(event, GDK_AXIS_PRESSURE, &dst->press);

    dst->tan = vect2d_sub(dst->pos, pos_tmp);

#if 0
    printf("pos:  %lf, %lf\n", dst->pos.x,  dst->pos.y);
    printf("tan:  %lf, %lf\n", dst->tan.x,  dst->tan.y);
    printf("tilt: %lf, %lf\n", dst->tilt.x, dst->tilt.y);
#endif
    return 0;
}
struct input_ctx *input_ctx_init(struct input_ctx *dst, GtkWidget *widget){
    input_data_init(&dst->data);
    dst->widget = widget;

    gtk_widget_set_support_multidevice(dst->widget, TRUE);
    int mask =
        // Key handling
        GDK_KEY_PRESS_MASK |

        // Allow scrolling
        GDK_SCROLL_MASK |

        // Touch / Pen / Mouse
        GDK_TOUCH_MASK | GDK_POINTER_MOTION_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK |
        GDK_SMOOTH_SCROLL_MASK | GDK_ENTER_NOTIFY_MASK | GDK_LEAVE_NOTIFY_MASK | GDK_PROXIMITY_IN_MASK |
        GDK_PROXIMITY_OUT_MASK;

    gtk_widget_add_events(dst->widget, mask);

    g_signal_connect(G_OBJECT(dst->widget), "event", G_CALLBACK(input_ctx_event_cb), dst);

    return dst;
}
gboolean input_ctx_event_cb(GtkWidget *widget, GdkEvent *event, gpointer data){
    struct input_ctx *dst = data;

    GdkDevice *dev = gdk_event_get_source_device(event);
    GdkInputSource src = gdk_device_get_source(dev);
    

    if(src != GDK_SOURCE_KEYBOARD && gdk_device_get_device_type(dev) != GDK_DEVICE_TYPE_MASTER){
        input_data_update(&dst->data, event);
    }
}
