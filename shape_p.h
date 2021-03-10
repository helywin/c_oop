//
// Created by jiang on 2021/3/10.
//

#ifndef OOP_C_SHAPE_P_H
#define OOP_C_SHAPE_P_H

struct shape;

struct shape_vtbl
{
    void (*move) (struct shape *self, int dx, int dy);
    void (*print) (struct shape *self);
    void (*draw) (struct shape *self);
};

struct shape
{
    struct shape_vtbl *vptr;
    int x;
    int y;
};

#endif //OOP_C_SHAPE_P_H
