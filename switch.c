#include <stdio.h>

int main()
{
    int age=4;
    switch (age)
    {
    case 3:
        printf("age is 3\n");
        break;          //agar break statement use nai krenge to niche wala v statement execute ho jayega, aur break use krne ka matlb h ki, sirf ye wala execute krke, aur bahar aa jao
            
    case 4:
        printf("age is 4\n");
        break;
    
    case 5:
        printf("age is 5\n");
        break;
    
    default:
        printf("its not there\n");
        break;
    }
}
