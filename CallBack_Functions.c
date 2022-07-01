// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int sum(int a, int b)
// {
//     printf("%d\n", a + b);
//     return a + b; // jv hm return use krte hai to jo sum k andar ka chiz hai wo baki k sbhi niche wale functions me jo hai distribute ho jata hai...lekin agar hm return k jagah pe printf use krte hai, to baki niche ka funcions jo hai, wo iska functions ko le nai pata hai---------
// }

// void greethelloandexecute(int (*fptr)(int, int))
// {
//     printf("hello user\n");
//     printf("the sum of 5 and 7 is %d\n", fptr(5, 7));
// }

// void greetgoodmrningandexecute(int (*fptr)(int, int))
// {
//     printf("good morning\n");
//     printf("the sum of 5 and 7 is %d\n", fptr(5, 7));
// }

// int main()
// {
//     int (*ptr)(int, int);
//     ptr = &sum;
//     greetgoodmrningandexecute(ptr);
//     printf("\n");
//     greethelloandexecute(ptr);

//     return 0;
// }

// FOR MORE CLARITY REFER TO THE CODE SNIPPET WRITTEN DOWN

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int suming(int a, int v)
{
    return (a + v);
}

int gming(int (*ptrr)(int, int))
{
    printf("the value of 5 and 54 is*** %d\n", ptrr(8520, 45120)); // here a+v gets inovoked into this from the (sum) function---
    return 0;
}

int evening(int (*ptrrrt)(int, int))
{
    printf("the value of 50 and 51 is*** %d\n", ptrrrt(20, 506)); // here also a+v gets invoked from the (sum) function---
    return 0;
}

int main()
{
    int (*ptr)(int, int);
    ptr = &suming;

    printf("nrngw %d\n", (*ptr)(54, 45));
    printf("\n");
    gming(ptr);
    printf("\n");
    evening(ptr);
    printf("\n");
    return 0;
}