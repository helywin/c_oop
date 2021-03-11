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
    print((struct shape *) r);
    draw((struct shape *) r);

    return 0;
}

/* result

shape {x:2, y:4}
rectangle {x:3, y:4, width:2, height:4}
draw -> rectangle {x:3, y:4, width:2, height:4}

 */