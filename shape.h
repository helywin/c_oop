//
// Created by jiang on 2021/3/9.
//

#ifndef OOP_C_SHAPE_H
#define OOP_C_SHAPE_H

struct shape;

// construct function
struct shape * shape_create(int x, int y);
void shape_init(struct shape *self, int x, int y);

// member function virtual api
void move(struct shape *s, int dx, int dy);
void print(struct shape *s);
void draw(struct shape *s);

#endif //OOP_C_SHAPE_H
