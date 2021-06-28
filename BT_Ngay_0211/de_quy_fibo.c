#include <stdio.h>
#include <conio.h>

int Fibo(int n)
{
    if (n==0 || n==1) return 1;
    else return Fibo(n-1)+Fibo(n-2);
}
int main()
{
    int n;
    printf("Ban muon tim phan tu co chi so bao nhieu trong day Fibonacci? "); scanf("%d",&n);
    printf("\nVay phan tu ban muon tim la: %d",Fibo(n));
    getch();
    return 0;
}
