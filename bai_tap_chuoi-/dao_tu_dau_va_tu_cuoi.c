#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char str1[50],str2[50];
    int n,i,vt1,vt2;
    printf("Nhap chuoi: ");
    gets(str1);
    n=strlen(str1);
    for (i=0;i<n;i++)
    {
        if (str1[i]==' ') break;
    }
    vt1=i;// tim vi tri cua khoang trang dau tien
    for (i=n-1;i>=0;i--)
    {
        if (str1[i]==' ') break;
    }
    vt2=i;// tim vị trí của khoảng trắng cuối cùng
    strcpy(str2,str1+vt2+1);//chuoi thu 2 co chua tu cuoi
    str1[vt2+1]='\0';// chuỗi 1 chỉ còn từ đầu tiên và các từ ở giữa
    strcat(str2," ");// chuoi 2 co dau cach
    strcat(str2,str1+vt1+1);//chuoi 2 co chua tu cuoi va cac tu o giua;
    str1[vt1+1]='\0'; // chuoi 1 chi con tu dau tien
    strcat(str2,str1);
    n=strlen(str2);
    puts(str2);
    getch();
    return 0;
}
