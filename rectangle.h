//
// Created by jiang on 2021/3/9.
//

#ifndef OOP_C_RECTANGLE_H
#define OOP_C_RECTANGLE_H

#include "shape.h"

struct rectangle;

struct rectangle *rectangle_create(int x, int y, int width, int height);
void rectangle_init(struct rectangle *self, int x, int y, int width, int height);

void area(struct rectangle *self);

#endif //OOP_C_RECTANGLE_H
