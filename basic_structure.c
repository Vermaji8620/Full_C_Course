#include <stdio.h>

int main()
{
    int a, b;
    printf("enter number a\n");
    scanf("%d", &a); //  & matlab hota hai address
    printf("a is entered", a);
    printf("enter number b\n");
    scanf("%d", &b);
    printf("sum is %d", a + b);
    return 0; // 0 jab return krte hai iska matlb hota hai, program successfully chal chuka hai
}
