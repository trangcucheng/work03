// nhap so tu nhien n roi tinh tong nghich dao

#include <stdio.h>
#include <conio.h>

int main()
{
	int n,i;
	float s=0;
	printf("Nhap so tu nhien n: "); scanf("%d",&n);
	for (i=1;i<=n;i++) s+= (float)1/i;
	printf("Ket qua can tinh la: %.4f",s);
	getch();
	return 0;
}
