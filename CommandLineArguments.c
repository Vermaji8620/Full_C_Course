// is poore program ka yeh matlb hota hai ki, hm koi v argument command line se de skte hai, yani ki direct CMD ya powershell se---
// yaha pe argument jo hai, wo file name se count hota hai...file name counted as 1[index=0] and then the other arguments likewise............ 2[index=1], 3[index=2], 4[index=3], 5[index=4],

// in terminal execute this command to pass arguments
//  <filename>.exe a b c d <enter>

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) // int argc has the count of the number of things(filename+number of other variables) that are being passed as arguments into the command line (1 is definitely there as a count because of the file even if there are no arguments presently)
// and argv is an array that contains the filename and the passed arguments---

{
    printf("the argument present is\n");
    for (int i = 0; i < argc; i++)
    {
        printf("this argument number %d has a value of %s\n", i, argv[i]);
    }
    return 0;
}
