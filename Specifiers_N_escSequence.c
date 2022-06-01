#include<stdio.h>
#define PI 3.14

int main()
{
    int a=8;
    const float b=7.333;
    // PI=7.454;// cannot do this since PI is a constant
    printf("%f",PI);
    printf("\n");
    // b=7.22;// cannot do this since b is a constant
    // printf("hello world");
    // printf("value of a is %d value of b is %2.4f\n", a, b);
    // printf("%18.4f this", b);
    printf("tab character \t my backslash \\n %f", PI);
    printf("tab character \t my backslash  \a %f", PI);
    return 0;
}
