#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int random;
int count = 0;
int tie = 0;
char y[10];
int num;
char x[10];
void printing()
{
    srand(time(NULL));
    random = ("%d", rand() % 3);
    printf("enter s for stone, p for paper, and c for cut\n");
    scanf("%s", &x);
    if (*x == 's')
    {
        if (random == 0)
        {
            printf("your input is stone\n");
            printf("computer input is stone\n");
            printf("its a tie\n");
            tie++;
        }
        else if (random == 1)
        {
            printf("your input is stone\n");
            printf("computer input is paper\n");
            printf("you lost\n");
        }
        else if (random == 2)
        {
            printf("your input is stone\n");
            printf("computer input is cut\n");
            printf("you won\n");
            count++;
        }
        printf("\n");
    }
    else if (*x == 'p')
    {
        if (random == 0)
        {
            printf("your input is paper\n");
            printf("computer input is stone\n");
            printf("you won\n");
            count++;
        }
        else if (random == 1)
        {
            printf("your input is paper\n");
            printf("computer input is paper\n");
            printf("its a tie\n");
            tie++;
        }
        else if (random == 2)
        {
            printf("your input is paper\n");
            printf("computer input is cut\n");
            printf("you lost\n");
        }
        printf("\n");
    }
    else if (*x == 'c')
    {
        if (random == 0)
        {
            printf("your input is cut\n");
            printf("computer input is stone\n");
            printf("you lost\n");
        }
        else if (random == 1)
        {
            printf("your input is cut\n");
            printf("computer input is paper\n");
            printf("you won\n");
            count++;
        }
        else if (random == 2)
        {
            printf("your input is cut\n");
            printf("computer input is cut\n");
            printf("its a tie\n");
            tie++;
        }
        printf("\n");
    }
}

int main()
{
    printf("enter the number of times that you want to play this game\n");
    scanf("%d", &num);
    if (num / 1 == num)
    {
        int zzz = 0;
        while (zzz != num)
        {
            printing();
            zzz++;
        }
        printf("you won %d times out of %d times of input\n", count, num);
        printf("match is a tie %d times out of %d times of input\n", tie, num);
        printf("you lost %d times out of %d times of input\n", num - (tie + count), num);
    }

    return 0;
}
