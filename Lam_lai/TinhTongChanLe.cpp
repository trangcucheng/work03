// viet chuong trinh tinh tong s
#include <stdio.h>
#include <conio.h>

int main()
{
	int n,s=0,i;
	printf("Nhap n: "); scanf("%d",&n);
	for (i=n%2;i<=n;i+=2) s+=i;
	printf("Ket qua can tinh la: %d",s);
	getch();
	return 0;
}
