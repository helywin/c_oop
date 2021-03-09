//
// Created by jiang on 2021/3/9.
//

#include "rectangle.h"
#include <stdlib.h>
#include <stdio.h>

rectangle *rectangle_create(int x, int y, int width, int height)
{
    rectangle *r = malloc(sizeof(rectangle));
    rectangle_init(r, x, y, width, height);
    return r;
}

void rectangle_init(rectangle *self, int x, int y, int width, int height)
{
    shape_init(&self->base, x, y);
    self->width = width;
    self->height = height;
}

void rectangle_move(rectangle *self, int dx, int dy)
{
    shape_move(&self->base, dx, dy);
}

void rectangle_print(rectangle *self)
{
    printf("rectangle {x:%d, y:%d, width:%d, height:%d}\n",
           self->base.x, self->base.y,
           self->width, self->height);
}