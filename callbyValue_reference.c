#include <stdio.h>
void changevalue(int *address)
{
    *address = 665;
}
int main()
{
    int a = 34, b = 56;
    printf("the value of a now is %d\n", a);
    changevalue(&a);
    printf("the value of %d", a);
    return 0;
}
