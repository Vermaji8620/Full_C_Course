#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("file name is %s\n", __FILE__);
    printf("today's date is %s\n", __DATE__);
    printf("time now is %s\n", __TIME__);
    printf("Line no. is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__); // to check kii agar ANSI standard se ye wala program compile ho rha h ya nai---

    return 0;
}