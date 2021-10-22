#ifndef VECT_H
#define VECT_H

#include <stdint.h>
#include <stddef.h>

struct vect2i{
    int x, y;
};

struct vect3i{
    int x, y, z;
};

struct vect4i{
    int x, y, z, w;
};

struct vect2z{
    size_t x, y;
};

struct vect3z{
    size_t x, y, z;
};

struct vect2f{
    float x, y;
};

struct vect3f{
    float x, y, z;
};

struct vect4f{
    float x, y, z, w;
};

struct vect2d{
    double x, y;
};

struct vect3d{
    double x, y, z;
};

struct vect4d{
    double x, y, z, w;
};

static inline struct vect2i vect2i(int x, int y){
    return (struct vect2i){.x = x, .y = y};
}
static inline struct vect3i vect3i(int x, int y, int z){
    return (struct vect3i){.x = x, .y = y, .z = z};
}
static inline struct vect4i vect4i(int x, int y, int z, int w){
    return (struct vect4i){.x = x, .y = y, .z = z, .w = w};
}

static inline struct vect2z vect2z(size_t x, size_t y){
    return (struct vect2z){.x = x, .y = y};
}
static inline struct vect3z vect3z(size_t x, size_t y, size_t z){
    return (struct vect3z){.x = x, .y = y, .z = z};
}

static inline struct vect2f vect2f(float x, float y){
    return (struct vect2f){.x = x, .y = y};
}
static inline struct vect3f vect3f(float x, float y, float z){
    return (struct vect3f){.x = x, .y = y, .z = z};
}
static inline struct vect4f vect4f(float x, float y, float z, float w){
    return (struct vect4f){.x = x, .y = y, .z = z, .w = w};
}

static inline struct vect2f vect2f_scale(struct vect2f v, float s){
    return (struct vect2f){.x = v.x * s, .y = v.y * s};
}
static inline struct vect3f vect3f_scale(struct vect3f v, float s){
    return (struct vect3f){.x = v.x * s, .y = v.y * s, .z = v.z * s};
}
static inline struct vect4f vect4f_scale(struct vect4f v, float s){
    return (struct vect4f){.x = v.x * s, .y = v.y * s, .z = v.z * s, .w = v.w * s};
}

static inline struct vect2d vect2d(double x, double y){
    return (struct vect2d){.x = x, .y = y};
}
static inline struct vect3d vect3d(double x, double y, double z){
    return (struct vect3d){.x = x, .y = y, .z = z};
}
static inline struct vect4d vect4d(double x, double y, double z, double w){
    return (struct vect4d){.x = x, .y = y, .z = z, .w = w};
}

static inline struct vect2d vect2d_scale(struct vect2d v, double s){
    return (struct vect2d){.x = v.x * s, .y = v.y * s};
}

static inline struct vect2d vect2d_sub(struct vect2d v1, struct vect2d v2){
    return (struct vect2d){.x = v1.x - v2.x, .y = v1.y - v2.y};
}

#endif //VECT_H
