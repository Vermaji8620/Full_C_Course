#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char fav_char; // struct {...} ye pura ko hm datatype samajh sakte hai to jaise hm (int harry, larry;) likhte hai, waise (struct student harry, larry;e) likh skte hai....
    char name[34];
};

int main()
{
    struct student harry, ravi, shubham;
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;

    harry.marks = 466;
    ravi.marks = 4466;
    shubham.marks = 4548566;

    harry.fav_char = 'p';
    ravi.fav_char = 'q';
    shubham.fav_char = 'r';

    strcpy(harry.name, "mera naam harry bhai hai");
    strcpy(shubham.name, "mera naam shubham h re baba");

    printf("harry got %d marks\n", harry.marks);
    printf("harry's name is, %s\n", harry.name);
    printf("shubham's name is, %s\n", shubham.name);

    return 0;
}