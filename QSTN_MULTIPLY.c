#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int i;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d =", num, i);
        printf("%d", num * i);
        printf("\n");
    };
    return 0;
}
