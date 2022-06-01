#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func1(char strring[])
{
    printf("func1===the string that is to be printed is---- %s\n", strring);
}
int func2(char strring[])
{
    printf("func2===the string that is to be printed is---- %s\n", strring);
    return 0;
}

char func3(char strr[])
{
    int i = 0;
    while (strr[i] != '\0')
    {
        printf("%c", strr[i]);
        i++;
    }
    printf("\n");
    return 0;
}

// STRING PROGRAMS K CASE ME POINTER JO HAI WO ARRAY K JAISE V KAAM KRTA HAI...

char func4(char *vermajipointer)
{
    int i = 0;
    while (vermajipointer[i] != '\0')
    {
        printf("%c", vermajipointer[i]);
        i++;
    }
    return 0;
}

int main()
{
    char string[] = "this is a string to be";
    printf("the string is : %s\n", string);

    char stringg[] = "this is a string to be";
    func1(stringg);
    func2(stringg);

    char str[] = "func3===this needs to be printed in the form of the pointers";
    func3(str);

    char verma[] = "func4===this is a vermaji strig that needs to be printed";
    func4(verma);

    return 0;
}