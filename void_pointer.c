#include <stdio.h>
#include <string.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    // details of a ---
    ptr = &a;
    printf("the address of a is %d\n", ptr);
    printf("the value of a is %d\n", *((int *)(ptr))); // cannot be directly dereferenced hence at first it needs to be typecasted and then it can be dereferenced

    // details of b ---
    ptr = &b;
    printf("the address of b is %f\n", ptr);
    printf("the value of b is %f\n", *((float *)(ptr))); // cannot be directly dereferenced hence at first it needs to be typecasted and then it can be dereferenced

    return 0;
}