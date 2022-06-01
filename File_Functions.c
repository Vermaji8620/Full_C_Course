

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    // char string[74] = "This is a thing for the doings that have gone\n"; //for writing to a file
    char string[50]; // for reading from a file

    // *******reading a file*********
    ptr = fopen("filetext.txt", "r");
    fscanf(ptr, "%s", string); // hm pura file me se ek string nikalke usko string array k andar store krrhe hai, aur phir is string variable ko print ko print kr de rhe hai
    printf("the content of the file is %s\n", string);

    //*******writing a file***********
    // ptr=fopen("filetext.txt", "w");
    // fprintf(ptr, "%s", string);
    //******appending in a file********
    // ptr = fopen("filetext.txt", "a");
    // fprintf(ptr, "%s", string);
    return 0;
}
