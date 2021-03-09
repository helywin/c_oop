#include <stdio.h>
#include "shape.h"
#include "rectangle.h"

int main()
{
    struct shape *s = shape_create(1, 3);
    shape_move(s, 1, 1);
    shape_print(s);

    //rectangle *r = rectangle_create(1, 1, 2, 4);
    //rectangle_move(r, 1, 2);
    //rectangle_print(r);
    return 0;
}
