#include <stdio.h>
#include <stdlib.h>

int main()
{
    // // use of malloc
    // int *ptr;
    // int n;
    // printf("enter the size of the array\n");
    // scanf("%d", &n);
    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("enetr the value number %d of this array\n", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("the value at %d of this array is %d\n", i, ptr[i]);
    // }

    // use of calloc
    int *ptr;
    int n;
    printf("enter the size of the array\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enetr the value number %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at %d of this array is %d\n", i, ptr[i]);
    }

    // use of realloc
    printf("enter the size of the new array ypu want to create\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the newvalue number %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the new value at %d of this array is %d\n", i, ptr[i]);
    }
    free(ptr);
    return 0;
}