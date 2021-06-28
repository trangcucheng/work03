#include <stdio.h>
#include <conio.h>
#include <math.h>

int Count(int n)
{
    int count=0;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i==0) count++;
    }
    return count;
}
int main()
{
    int n;
    printf("Nhap so n: "); scanf("%d",&n);
    if (Count(n)!=0) printf("Day khong phai la so nguyen to!");
    else printf("Day la so nguyen to!");
    getch();
    return 0;
}
