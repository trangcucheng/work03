/*Chuong trinh nhap mot so nguyen trong khoang tu 0 den 100, sau do lan luot chon ngau nhien mot
so cho den khi chon duoc so bang so nhap vao, in ra so buoc va ket qua tung buoc */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int n,i;
	int count=1;
	printf("Nhap mot so nguyen trong khoang tu 0 den 100: ");
	scanf("%d",&n);
	do 
	{
		i= rand()%101;
		printf("Ket qua lan thu %d la %d\n",count,i);
		count++;	 
	} while (i!=n);
	printf("Ket qua cuoi cung la lan thu %d",count-1);
	getch();
	return 0;
}
