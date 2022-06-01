#include <stdio.h>

int func1(int b)
{
    static int myvar = 90; // static use jb krte hai, to iska yeh matlb hota hai ki, jo v kch value me change hua hai, ye usko yaad rkhta hai, aur wahi se next operation shuru krta hai,
    printf("the value of myvar is %d\n", myvar);
    myvar++;
    return 0;
}
int main()
{
    int b = 500;
    func1(b);
    func1(b);
    func1(b);
    func1(b);
    return 0;
}