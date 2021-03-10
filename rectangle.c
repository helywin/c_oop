//
// Created by jiang on 2021/3/9.
//

#include <stdlib.h>
#include <stdio.h>

#include "rectangle.h"
#include "rectangle_p.h"

// not override
//void rectangle_move(struct rectangle *self, int dx, int dy);
void rectangle_print(struct rectangle *self);
void rectangle_draw(struct rectangle *self);
int rectangle_area(struct rectangle *self);

struct rectangle *rectangle_create(int x, int y, int width, int height)
{
    struct rectangle *r = malloc(sizeof(struct rectangle));
    rectangle_init(r, x, y, width, height);
    return r;
}

void rectangle_init(struct rectangle *self, int x, int y, int width, int height)
{
    shape_init(&self->base, x, y);
    self->vptr->print = &rectangle_print;
    self->vptr->draw = &rectangle_draw;
    self->vptr->area = &rectangle_area;
    self->width = width;
    self->height = height;
}

void rectangle_print(struct rectangle *self)
{
    printf("rectangle {x:%d, y:%d, width:%d, height:%d}\n",
           self->base.x, self->base.y,
           self->width, self->height);
}

void rectangle_draw(struct rectangle *self)
{
    printf("draw -> ");
    rectangle_print(self);
}

int rectangle_area(struct rectangle *self)
{
    return self->width * self->height;
}

void area(struct rectangle *self)
{
    self->vptr->area(self);
}
