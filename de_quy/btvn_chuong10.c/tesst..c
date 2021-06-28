#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100],s2[100],s3[100];
	printf("Nhap xau thu nhat:\n");gets(s1);
	printf("Nhap xau thu hai:\n");gets(s2);
	printf("Nhap xau thu ba:\n");gets(s3);
	if( strstr(s1,s2)== "\0")
        {
            printf("\nChuoi thu hai khong xuat hien trong chuoi thu nhat!");
        }
    else
    {
     s1[strlen(s1)-strlen(s2)]="\0";
     strcpy(s1,s3);
     puts(s1);
    }
	return 0;
}
