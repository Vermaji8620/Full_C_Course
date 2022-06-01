#include <stdio.h>
int main()
{
    // int a=34;
    // int* ptra=&a;
    // char a='4';
    // char* ptra=&a;
    // printf("%d\n", ptra);// int 4 byte leta hai, isiliye jb niche me +1 kr rahe h to, address 4 se increase ho ja rha hai
    // ptra++;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra+1);// char 1 byte leta hai, isiliye jb niche me +1 kr rahe h to, address 1 se increase ho ja rha hai
    // printf("%d\n", ptra+2);

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("the address of the first element of the array is %d\n", &arr[0]);
    printf("the address of the first element of the array is %d\n", arr);
    printf("the address of the second element of the array is %d\n", &arr[1]);
    printf("the address of the second element of the array is %d\n", arr + 1);
    printf("the address of the third element of the array is %d\n", &arr[2]);
    printf("the address of the third element of the array is %d\n", arr + 2);
    printf("\n");
    printf("the value at address of the first element of the array is %d\n", *(&arr[0]));
    printf("the value at address of the first element of the array is %d\n", *(arr));
    printf("the value at address of the second element of the array is %d\n", *(&arr[1]));
    printf("the value at address of the second element of the array is %d\n", *(arr + 1));

    return 0;
}