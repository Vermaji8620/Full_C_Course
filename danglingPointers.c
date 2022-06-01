#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int *funcdangling()
{
    int a = 43;
    int b = 53;
    int sum = a + b;
    return &sum;
}

int main()
{
    // case 1: deallocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 35;
    ptr[2] = 36;
    ptr[3] = 37;
    free(ptr); // now ptr is a dangling pointer

    // case 2: function returning local variable address
    int *dangptr = funcdangling(); // ptr is now a dangling pointer

    // case 3: a variable goes out of scope
    int *danglingptr3;
    {
        int a = 43;
        danglingptr3 = &a;
    } // here variable a goes out of scope which means that danglingptr3 is pointing to a locaion which is free and hence danglingptr3 is now a dangling pointer
    return 0;
}