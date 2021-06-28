#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char str1[100],str2[50],*s;
    printf("Nhap day ho ten: ");
    gets(str1);
    printf("Nhap ho ten can tim: ");
    gets(str2);
    s=strstr(str1,str2);
    if (s!='\0') printf("Da dang nhap!");
    else printf("Chua dang nhap!");
    getch();
    return 0;
}
