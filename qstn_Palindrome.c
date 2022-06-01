#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    printf("enter the number");
    int num;
    scanf("%d", &num);
    int nnn = num;
    int b = 0;
    int div;
    int divv;
    int add;
    while (nnn != 0)
    {
        div = nnn % 10;
        b = div + (b * 10);
        nnn = nnn / 10;
    }
    if (b == num)
    {
        printf("Its palindrome");
    }
    else
    {
        printf("No, not a palindrome");
    }
    return 0;
}