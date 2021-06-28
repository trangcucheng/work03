#include "stdio.h"
#include "conio.h"

int UCLN(int a, int b)
{
    if (b==0) return a;
    else
    {
        return UCLN(b,a%b);
    }
}
int main()
{
    int a,b;
    printf("Nhap hai so a va b: ");
    scanf("%d%d",&a,&b);
    printf("vay uoc chung lon nhat: %d",UCLN(a,b));
    getch();
    return 0;
}
