#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=0, j=0;
    for (; j< 10, i<6; i++) //the second condition is exectued in the middle of the two semicolons, and then correspondingly, the next statement
    {
        printf("%d %d \n", i, j);
        printf("\n");

    }

    return 0;
}