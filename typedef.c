#include <stdio.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    // // typedef <previous name> <alias_name>
    // typedef int i; // integer ko chota krke i bana diya, ab (int a) k jagah pe (i a) use kr skte hai, koi problem nai hoga ...
    // i a = 54, b = 4;
    // printf("a is %d\n", a);
    // printf("b is %d", b);
    // return 0;

    // isme agar hmko a, aur b dono ko hi pointer banana hai, to nai bana payenge..to isiliye jo pointer hai, ukso hmko typedef krna hoga, taki dono ban sake.
    // int *a, b;
    typedef int *intpointer;
    intpointer a, b; // ye krne se mera a aur b dono hi pointer ban chuka hai.....
    int c = 89;
    int d = 19;
    a = &c;
    b = &d;
    printf("a is %x\n", a);
    printf("b is %d\n", b);

    // //APPLICATION OF TYPEDEF----------------
    // typedef struct student sst;
    // sst ha, la;
    // ha.id=2;
    // ha.marks=56;
    // la.id=4;
    // la.marks=65;

    // printf("ha id is %d\n", ha.id);
    // printf("ha id is %d\n", ha.marks);
}