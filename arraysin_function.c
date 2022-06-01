#include <stdio.h>

int func1(int array[4])
{
    *(array + 3) = 382222;
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, array[i]);
    }
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value tt %d is %d\n", i, *(&ptr[i]));
        printf("the value tt %d is %d\n", i, &ptr[i]);
        printf("\n");
        *(ptr + 2) = 555444;
    }
}

void func3(int arrr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the valuee at %d, %d is %d\n", i, j, arrr[i][j]);
        }
    }
}

int main()
{
    int arr[4] = {23, 5, 1, 4};
    func1(arr);
    func2(arr);
    int arrr[2][2] = {{2, 13}, {3, 8}};
    func3(arrr);
    return 0;
}
