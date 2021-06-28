#include <stdio.h>

int main()
{
	char str[50],i=0,dem=0;
	printf("Nhap chuoi: ");
	gets(str);
	while (str[i]!='\0')
	{
		dem++;
		i++;
	}
	printf("Do dai chuoi la: %d",dem);
}
