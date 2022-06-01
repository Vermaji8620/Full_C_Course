#include <stdio.h>

int main()
{
    // lhghghh:
    //     printf("we are inside label\n");
    //     goto endidd;
    //     printf("hello people it is changed\n");
    //     goto lhghghh;
    //     endidd:
    //         printf("this is the end");
    for (int i = 0; i < 8; i++)
    {
        int num;
        printf("i is", " ");
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("enter the number, enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                // break;
                goto end;
            }
        }
    }
end:
    printf("its over");
    return 0;
}
