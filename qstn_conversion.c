#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, f;
    char q;
    while (1)
    {
        printf("\n");
        printf("enter 1 for km to Hm\n enter 2 for km to Dm\n enter 3 for km to m\n enter 4 for km to cm\n enter 5 for km to mm\n press q to exit\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("enter the value in km for conversion to Hm\n");
            scanf("%d", &b);
            printf("the value in Hm is %d\n", b * 10);
            break;

        case 2:
            printf("enter the value in km for conversion to Dm\n");
            scanf("%d", &b);
            printf("the value in Hm is %d\n", b * 100);
            break;

        case 3:
            printf("enter the value in km for conversion to m\n");
            scanf("%d", &b);
            printf("the value in Hm is %d\n", b * 1000);
            break;

        case 4:
            printf("enter the value in km for conversion to cm\n");
            scanf("%d", &b);
            printf("the value in Hm is %d\n", b * 100000);
            break;

        case 5:
            printf("enter the value in km for conversion to mm\n");
            scanf("%d", &b);
            printf("the value in Hm is %d\n", b * 1000000);
            break;

        case 'q':
            goto end;
        }

        printf("do you wanna play again. enter 1 for yes 0 for no\n");
        scanf("%d", &f);
        if (f == 1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
end:
    return 0;
}