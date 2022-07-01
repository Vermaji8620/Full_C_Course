
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    char str1[20];
    char str2[20];
    char str3[40];
    char str4[40];
    char char1;
    char char2;
    char char3;
    char char4;
    // all about taking strings inside the array ---- be it manually or from user
    // from user
    printf("enter the first string\n");
    gets(str1);
    printf("\n");
    printf("The first string is %s\n", str1);
    printf("enter the second string\n");
    gets(str2);
    printf("\n");
    printf("the second string is %s\n", str2);
    // manually
    strcpy(str3, "This is the 3 string");
    printf("the third string is %s\n", str3);
    strcpy(str4, "this is the 4 string");
    printf("the fourth string is %s\n", str4);

    // all about taking characters -- be it manually or from user

    // manually
    char3 = 'C';
    printf("the third charcater is %c\n", char3);
    char4 = 'D';
    printf("the fourth character is %c\n", char4);

    return 0;
}