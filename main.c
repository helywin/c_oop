#include <stdio.h>
#include "shape.h"
#include "rectangle.h"

int main()
{
    struct shape *s = shape_create(1, 3);
    move(s, 1, 1);
    print(s);

    struct rectangle *r = rectangle_create(2, 3, 2, 4);
    move((struct shape *)r, 1, 1);
    print((struct shape *) s);
    draw((struct shape *) s);

    return 0;
}
