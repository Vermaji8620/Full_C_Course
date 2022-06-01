#include <stdio.h>
#include <string.h>

int main()
{
    printf("enter your first name\n");
    char firstname[10];
    gets(firstname);
    printf("enter your second name\n");
    char secondname[10];
    gets(secondname);
    printf("your full name is %s .", strcat(firstname, secondname));

    return 0;
}