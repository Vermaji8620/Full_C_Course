#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != 0)
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    // char str[] = "harry";
    // printStr(str);

    printf("enter name\n");
    char str[50];
    gets(str);
    printStr(str);
    // printf("it is %s", str);

    return 0;
}