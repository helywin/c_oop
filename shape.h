//
// Created by jiang on 2021/3/9.
//

#ifndef OOP_C_SHAPE_H
#define OOP_C_SHAPE_H

struct shape;

struct shape_vtbl
{
    int (*area) (struct shape *self);
    void (*draw) (struct shape *self);
};

struct shape
{
    struct shape_vtbl *vptr;
    int x;
    int y;
};


struct shape * shape_create(int x, int y);
void shape_init(struct shape *self, int x, int y);
void shape_move(struct shape *self, int dx, int dy);
void shape_print(struct shape *self);
int shape_area(struct shape *self);
void shape_draw(struct shape *self);

#endif //OOP_C_SHAPE_H
