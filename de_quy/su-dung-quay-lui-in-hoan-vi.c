// sử dụng quay lui in hoán vị
#include "stdio.h"
#include "conio.h"

void In(int x[], int n)
{
    for (int i=0;i<n;i++) printf("%d   ",x[i]);
    printf("\n");
}
int main()
{
    int n, x[20];
    printf("Nhap n: "); scanf("%d",&n);

    getch();
    return 0;
}
