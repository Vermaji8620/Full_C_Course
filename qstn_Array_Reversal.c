// FOR NUMERICAL VALUES

//..........NUMERICAL VALUES(1st process)
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

//..........NUMERICAL VALUES(2nd process)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    printf("enter the number of elements you want to enter");
    int num;
    scanf("%d", &num);
    int storing[num];
    int i = 0;
    while (i != num)
    {
        scanf("%d", &storing[i]);
        i++;
    }

    printf("\n");

    for (int j = 0; j < num; j++)
    {
        printf("%d ", storing[j]);
    }

    printf("\n");
    for (int k = num-1; k >= 0; k--)
    {
        printf("%d ", storing[k]);
    }

    return 0;
}


// FOR STRING VALUES

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <math.h>
// #include <time.h>
// int main()
// {
//     printf("enter the sentence to reverse\n");
//     char senrev[100];
//     gets(senrev);
//     for (int i = strlen(senrev); i >= 0; i--)
//     {
//         printf("%c", senrev[i]);
//     }
//     printf("\n");

//     // OR

//     printf("the reversed string is %s    ", strrev(senrev));
//     return 0;
// }

// string without using strrev function

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <math.h>
// #include <time.h>

// int func1(char namee[50])
// {
//     int i = sizeof(namee) / sizeof(namee[0]);
//     while (i != 0)
//     {
//         printf("%c", namee[i-1]);
//         i--;
//     }
// }

// int main()
// {
//     printf("enter the name to print\n");
//     char name[50];
//     gets(name);
//     func1(name);
//     return 0;
// }