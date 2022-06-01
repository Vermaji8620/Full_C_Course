#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a = 334;
    int *ptr;//  this is a wild pointer
    // *ptr = 34; //this is not a good thing to do--
    ptr = &a; // ptr is no longer a wild pointer
    printf("the value of a is %d", *ptr);
    return 0;
}