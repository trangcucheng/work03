#include <stdio.h>
#include <conio.h>

int main(){
 int a = 12 + 21 * 3 - 9 / 2;
int b = 14 - 32 * 4 + 175 / 8 - 3;

        if(++a > 71 && --b < 20)
        {
            printf("a = %d, b= %d", a*2,(b+1));
        }

        if(b-- == -97 || a-- < 100)
        {
            printf("a = %d, b= %d ", -a,-b);
        }
        return 0;
    }

