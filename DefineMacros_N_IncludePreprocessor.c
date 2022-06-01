#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "storageClasses_inC.c" // invoking the other program here---
#define zizizi 3.14             // using define directive        (its a macro)
#define SQUAREEE(r) r *r        // (its a macro)


int main()
{
    myfunc(10, 20); // calling the function of the other program since we have invoked that program----
    printf("\n");
    printf("this is a thing\n");
    float var = zizizi;
    printf("the value of var is %f\n", var);
    float r = 4.1;
    printf("the area of the circle is %f\n", SQUAREEE(r));
    return 0;
}
