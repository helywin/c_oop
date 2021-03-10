//
// Created by jiang on 2021/3/9.
//

#include <stdlib.h>
#include <stdio.h>

#include "shape.h"
#include "shape_p.h"

// member functions
void shape_move(struct shape *self, int dx, int dy);
void shape_print(struct shape *self);
void shape_draw(struct shape *self);

struct shape *shape_create(int x, int y)
{
    struct shape *s = malloc(sizeof(struct shape));
    shape_init(s, x, y);
    return s;
}

void shape_init(struct shape *self, int x, int y)
{
    self->vptr = malloc(sizeof(struct shape_vtbl));
    self->vptr->move = &shape_move;
    self->vptr->print = &shape_print;
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

void shape_draw(struct shape *self)
{
    printf("draw -> ");
    shape_print(self);
}

void move(struct shape *s, int dx, int dy)
{
    s->vptr->move(s, dx, dy);
}

void print(struct shape *s)
{
    s->vptr->print(s);
}

void draw(struct shape *s)
{
    s->vptr->draw(s);
}