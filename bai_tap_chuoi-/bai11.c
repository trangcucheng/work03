#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char str1[50],str2[50],*s;
    int d=-1;       // neu khong tim thay vi tri thi dua ra man hinh -1
    printf("Nhap Chuoi Ban Dau: ");
    gets(str1);
    printf("Nhap Chuoi Can Tim: ");
    gets(str2);
    s=strstr(str1,str2);
    puts(s);
    if (s!='\0')
    {
        d=strlen(str1)-strlen(s);
    }
    printf("Vi Tri: %d",d);
    getch();
    return 0;
}
