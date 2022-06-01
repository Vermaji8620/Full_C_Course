#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]="harry";
    char s2[]="ravi";
    char s3[30];
    // puts(strcat(s1, s2));
    // printf("the length of s1 is %d\n", strlen(s1));
    // printf("the length of s2 is %d\n", strlen(s2));
    printf("the reversed string s1 is %s\n", strrev(s1));
    printf(strcpy(s3, strcat(s1, s2)));
    return 0;
}
