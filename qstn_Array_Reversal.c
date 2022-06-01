#include <stdio.h>

void originarray(int arr[])
{
    printf("the original array is\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void revarray1(int arr[])
{
    printf("the reversed array by this method is\n");
    for (int j = 5; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}

void revarray2(int arr[])
{
    printf("the reversed array by this method is\n");
    int temp;
    for (int k = 0; k < 6 / 2; k++)
    {
        temp = arr[k];
        arr[k] = arr[5 - k];
        arr[5 - k] = temp;
        printf("%d ", arr[k]);
    }
    for (int k = 6 / 2; k < 6; k++)
    {
        temp = arr[k];
        arr[k] = arr[5 - k];
        arr[5 - k] = temp;
        printf("%d ", arr[5 - k]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    originarray(arr);
    revarray1(arr);
    revarray2(arr);
    return 0;
}