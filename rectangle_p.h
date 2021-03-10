//
// Created by jiang on 2021/3/10.
//

#ifndef OOP_C_RECTANGLE_P_H
#define OOP_C_RECTANGLE_P_H

#include "shape_p.h"

struct rectangle_vtbl
{
    void (*move) (struct shape *self, int dx, int dy);
    void (*print) (struct rectangle *self);
    void (*draw) (struct rectangle *self);
    int (*area) (struct rectangle *self);
};

struct rectangle
{
    union {
        struct rectangle_vtbl *vptr;
        struct shape base;
    };
    int width;
    int height;
} rectangle;

#endif //OOP_C_RECTANGLE_P_H
