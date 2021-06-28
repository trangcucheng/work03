#include "stdio.h"
#include "conio.h"

void Reverse(int a)
{
    if (a<10) printf("%d",a);
    else
    {
        printf("%d",a%10);
        return Reverse(a/10);
    }
}
int main()
{
    int a;
    printf("Nhap so a: ");
    scanf("%d",&a);
    printf("Ket qua: %\n");
    Reverse(a);
    getch();
    return 0;
}
