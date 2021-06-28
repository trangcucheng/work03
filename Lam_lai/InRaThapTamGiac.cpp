// nhap chieu cao va canh day in ra thap tam giac
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int h,d,i,j;
	printf("Nhap chieu cao: "); scanf("%d",&h);
	for (i=1;i<=h;i++)
	{
		for (j=1;j<=(2*h-1);j++)
		{
			if (abs(h-j)<i) printf("%d\t", abs(i-abs(h-j)));
			else printf("\t");	
		}
		printf("\n");
	}
	getch();
	return 0;
}
