//
// Created by jiang on 2021/3/9.
//

#include <stdlib.h>
#include <stdio.h>

#include "shape.h"

struct shape * shape_create(int x, int y)
{
    struct shape *s = malloc(sizeof(struct shape));
    s->vptr = malloc(sizeof(struct shape_vtbl));
    shape_init(s, x, y);
    return s;
}

void shape_init(struct shape *self, int x, int y)
{
    self->vptr->area = &shape_area;
    self->vptr->draw = &shape_draw;
    self->x = x;
    self->y = y;
}

void shape_move(struct shape *self, int dx, int dy)
{
    self->x += dx;
    self->y += dy;
}

void shape_print(struct shape *self)
{
    printf("shape {x:%d, y:%d}\n", self->x, self->y);
}

int shape_area(struct shape *self)
{
   return self->x * self->y;
}
void shape_draw(struct shape *self)
{
    printf("draw -> ");
    shape_print(self);
}
