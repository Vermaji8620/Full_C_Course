#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int func(int *nmm)
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d", *(nmm+i));
    }

    return 0;
}

int main()
{
    int num[4] = {1, 2, 3, 5};
    func(&num);
    return 0;
}