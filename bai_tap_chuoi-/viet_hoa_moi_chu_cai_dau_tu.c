#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char str[50];
	int i,n;
	printf("Nhap chuoi: ");
	gets(str);
	n=strlen(str);
	str[0]=struppr(str[0]);
	for (i=0;i<n;i++)
	{ 
		if (str[i]==' ')  str[i+1]=struppr(str[i+1]);
	}
	print("Ket qua:");
	puts(str);
	getch();
	return 0;
}
