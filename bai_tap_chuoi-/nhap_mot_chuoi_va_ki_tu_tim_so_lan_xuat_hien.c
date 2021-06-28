#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	char str[50],c;
	int dem=0,n,i;
	printf("Nhap chuoi: ");
	gets(str);
	printf("Nhap ki tu can tim: ");
	scanf("%c",&c);
	n=strlen(str);
	for (i=0;i<n;i++)
	{
		if (str[i]==c) dem++;
	}
	printf("So lan xuat hien: %d",dem);
	getch();
	return 0;
}

