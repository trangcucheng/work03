// chuong trinh in bang cuu chuong
#include <stdio.h>
#include <conio.h>

int main()
{
	int i,j;
	for (i=0;i<=10;i++)
	{
		printf("\t");
		for (j=1;j<=9;j++)
		{
			printf("%2d x %2d = %2d   ",j,i,j*i);
		}
		printf("\n");
	}
	getch();
	return 0;
}
