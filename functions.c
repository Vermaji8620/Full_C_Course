#include <stdio.h>

// return type with argument
int sum(int a, int b)
{
    printf("yes its done\n");
    printf("the sum is %d\n", a + b);
    return (a + b);
}

// no return type but with argument
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*");
        printf("\n");
    }
}

// return type but no argument
int takenumber()
{
    int i;
    printf("enter a number\n");
    scanf("%d", &i);
    printf("the number is");
    return i;
}

// no return type and no argument
void no()
{
    printf("hello how are you people");
}

//  main
int main()
{
    int a, b;
    a = 9;
    b = 87;
    sum(a, b);
    printstar(6);
    takenumber();
    no();
    return 0;
}
