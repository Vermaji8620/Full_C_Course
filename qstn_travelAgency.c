// you manaage a travel agency and you want your n=3 drivers to input their following details:
//  1. name
//  2. driving license no.
//  3. route
//  4. kms

// your program should be able to take n=3 as input and your drivers will start inputting their details one by one.
// your program should print details of the drivers in a beautiful fashion.

#include <stdio.h>
#include <string.h>

struct drivers
{
    char name[50];
    int lic;
    char route[50];
    int kms;
};

void printing(int p)
{
    printf("details are\n");
    for (int i = 0; i < p; i++)
    {
        typedef struct drivers sd;
        int licc;
        int kmss;
        char namee[50];
        char routee[50];
        sd a;

        printf("enter the name\n");
        scanf("%s", &namee);
        strcpy(a.name, namee);

        printf("enter the license number\n");
        scanf("%d", &licc);
        a.lic = licc;

        printf("enter the route\n");
        scanf("%s", &routee);
        strcpy(a.route, routee);

        printf("enter the kms travelled\n");
        scanf("%d", &kmss);
        a.kms = kmss;

        printf("\n");
        printf("name is %s\n", a.name);
        printf("%d is the lic number for %s\n", a.lic, a.name);
        printf("%s is the route for %s\n", a.route, a.name);
        printf("%s travels %d kilometer\n", a.name, a.kms);
        printf("\n");
    }
}

int main()
{
    printf("enter the number of people for whom you want to input the details\n");
    int p;
    scanf("%d", &p);
    printing(p);
    return 0;
}
