#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("filetext.txt", "r");  //for reading
    // ptr = fopen("filetext.txt", "w"); // for writing
    // ptr = fopen("filetext.txt", "r+");  //for reading+writing----us file me (jisko hm read krrhe hai) usme jo v content hai, wo overwrite ho jata hai...bus baat itna hai ki jo bhi hm insert krrhre hai, wo pehle me jake overwrite kar deta hai, original content ko, aur baki phir jo file ka original content bach jata hai, wo baad me fit ho jata hai----
    // ptr = fopen("filetext.txt", "w+");  //for overwriting----jo kch v hai, sb kch ko khali kr deta hai, aur apna jo kch v hai, wo jake pura overwrite ho jata hai..
    ptr = fopen("filetext.txt", "w+"); // for appending

    //*******fgetc function*******
    // char c = fgetc(ptr);
    // printf("the character i read was %c\n", c);
    // c = fgetc(ptr);
    // printf("the character i read was %c\n", c);

    //*******fgets function*******
    // char str[100];
    // fgets(str, 100, ptr);
    // printf("the string is   %s\n", str);

    //******fputs function******
    // fputs("fffffppppppppppppppp\n", ptr);

    //******fputc function******
    // fputc('d', ptr);

    fclose(ptr);
    return 0;
}