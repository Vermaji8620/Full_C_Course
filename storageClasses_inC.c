#include <stdio.h>
// #include "tmp.c"

// int sum;
// int sum = 50;
int sum ;
int myfunc(int a, int b)
{
    sum = a + b;
    extern int sum; // extern keyword is used to reach out to the variable that is present outside the definition of the function
    printf("%d", sum);
    return sum;
}

int main2()
{
    // declaration-- telling the compiler about the variable (no space reserved)
    // definition--  declaration + space reservation

    int sum = myfunc(3, 5);
    printf("the sum is %d\n", sum);

    return 0;
}


//main 2 has been written instead of main. This is just because this file has been invoked in Define_N_IncludePreprocessor.c file-- and nothing else.....else we must always use 'main' instead of anything else----