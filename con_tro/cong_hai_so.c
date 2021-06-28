#include "stdio.h"

int main()
{
    int a=20,b=50;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    int num=*p1+*p2;
    printf("ket qua: %d",num);
    getch();
    return 0;
}
