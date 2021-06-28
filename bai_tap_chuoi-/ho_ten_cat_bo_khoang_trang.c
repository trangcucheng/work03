#include "stdio.h"
#include "conio.h"
#include "string.h"

void xoakhoangtrangthua(char s[], int n)
{
    int i=0,j;
    while (s[i]!='\0')
    {
        if (s[i]==' ')
        {
            if (s[i+1]==' ')
            {
                for (j=i+1;j<n;j++)
                {
                    s[j]=s[j+1];
                }
                i--;
            }
        }
        i++;
    }
}

void DoiChuInHoa(char s[], int n)
{
    int i;
    s[0]=s[0]-32;
    for (i=0;i<n;i++)
    {
        if (s[i]==' ') s[i+1]=s[i+1]-32;
    }
}
int main()
{
    char HoTen1[50],HoTen2[50];
    int i,n,j=0,a[50];
    printf("Nhap ho va ten: ");
    gets(HoTen1);
    strlwr(HoTen1);
    n=strlen(HoTen1);
    for (i=0;i<n;i++)
    {
        if (HoTen1[i]>=97 && HoTen1[i]<=122) break;
    }
    int vt1=i;
    strcpy(HoTen2,HoTen1+vt1);
    for (i=n-1;i>=0;i--)
    {
        if (HoTen1[i]>=97 && HoTen1[i]<=122) break;
    }
    int vt2=i;
    HoTen2[vt2+1]='\0';
    xoakhoangtrangthua(HoTen2,vt2+1);
    DoiChuInHoa(HoTen2,vt2+1);
    printf("Ket qua: ");
    puts(HoTen2);
    getch();
    return 0;
}


