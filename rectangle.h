//
// Created by jiang on 2021/3/9.
//

#ifndef OOP_C_RECTANGLE_H
#define OOP_C_RECTANGLE_H

#include "shape.h"

typedef struct
{
    struct shape base;
    int width;
    int height;
} rectangle;

rectangle *rectangle_create(int x, int y, int width, int height);
void rectangle_init(rectangle *self, int x, int y, int width, int height);
void rectangle_move(rectangle *self, int dx, int dy);
void rectangle_print(rectangle *self);

#endif //OOP_C_RECTANGLE_H
