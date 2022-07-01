#include <stdio.h>
#include <string.h>

union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    union student s1;
    s1.id = 1;
    strcpy(s1.name, "harrylarrytarry");
    s1.fav_char = 'u';
    s1.marks = 45;
    // jb hm union use krenge, tb memory sharing hota hai, matlb ki, id, marks, ... jo v hm banaye hai, ye sb ek hi space ko apas me share krega, to jb program run hota hai, to kam space me jada kaaam hone k liye, hm union use krenge.....ye kisi v ek chiz ko priority deta hai(mainly last wale jisko hm assign krte h usko), aur baki sb ko ek garbage value assign kr deta hai....

    printf("the id is %d\n", s1.id);
    printf("the marks is %d\n", s1.marks);
    printf("the fav_char is %c\n", s1.fav_char);
    printf("the name is %s\n", s1.name);
    return 0;
}