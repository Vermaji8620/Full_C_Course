#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i ,age;
    for (i = 0; i < 10; i++)
    {
        printf("\n");
        printf("enter your age");
        printf("\n");
        scanf("%d", &age);
        // if(age>10){
        //     break; //yaha pe break ka mtalb hai ki, for k bahar aa jao, jab yaha pe break use kiya jata hai, iska ye matlb hai ki, uske cooresponding wale 'for/while/do-while' se bahar leke chale jao, to ye directly sidha for loop k hi bahar kr deta hai.
        // }

        if(age>10){
            continue; //continue ka mtalb hota hai, ki, baki niche wala code execute mat kro, wapis se upar chal jao, aur upar se fir se execute kro
        }
        printf("we have not come across continue statement\n");
        printf("vermaji is a good boy\n");
    }
    return 0;
}
