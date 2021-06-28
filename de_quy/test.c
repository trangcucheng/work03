#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    char r,c;
    r='a'+rand()%('z'-'a'+1);
    do
    {
       scanf("%c",&c);
    }while (r!=c);
    printf("Congratulation!");
    return 0;
}

