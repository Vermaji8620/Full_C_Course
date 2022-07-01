#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int func1(int arrr[4])
{
    //=========can be written in this way=============
    for (int i = 0; i < 4; i++)
    {
        printf("the %d element with the address of %x has the value of %d\n", i + 1, &(arrr[i]), *(&(arrr[i])));
    }
    printf("\n");

    //=========or can be written in this way===========
    for (int j = 0; j < 4; j++)
    {
        printf("the %d element with the address of %x has the value of %d\n", j + 1, arrr + j, *(arrr + j));
    }
}


// in func2 the pointer 'arrayy' acts as an array and even a pointer---and hence properties of array can be applied to it ----
int func2(int *arrayy)
{
    // ==========can be written in this way==============
    for (int k = 0; k < 5; k++)
    {
        printf("the %d element with the address of %x has the value of %d\n", k + 1, &(arrayy[k]), arrayy[k]);
    }
    printf("\n");

    // ===========or it can even be written in this way========
    for (int l = 0; l < 5; l++)
    {
        printf("the %d element whose address is %x has the value of %d\n", l + 1, arrayy + l, *(arrayy + l));
    }
}


int main()
{
    int arr[4] = {23, 5, 47, 82};
    func1(arr);
    int array[5] = {20, 14, 59, 85, 50};
    func2(array);
    return 0;
}