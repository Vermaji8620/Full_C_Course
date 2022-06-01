#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int a, int v)
{
    return a + v;
}

void greet()
{
    printf("nwkjnkjngw%d\n");
}
int main()
{
    // printf("the sum is %d", sum(1, 2));
    int (*fptr)(int, int);
    fptr = &(sum); // creating a function pointer
    int d = (*fptr)(4, 65);
    printf("the value of d is %d", d);

    return 0;
}