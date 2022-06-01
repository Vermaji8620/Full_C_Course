#include <stdio.h>
int main()
{
    int a = 35;
    int *ptr = NULL;
    // int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("the address of a is %d\n", *ptr);
    }
    else
    {
        printf("cannot be dereferneced");
    }

    return 0;
}