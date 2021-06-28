#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Nhap chuoi: ");
    gets(s);
    int n= strlen(s),i,st,en,j=0;
    for (i=0;i<n;i++)
    {
        if (s[i]!=' ') break;
    }
    st=i;
    for (i=n-1;i>=0;i--)
    {
        if (s[i]!=' ') break;
    }
    en=i;
    for (i=st;i<=en;i++)
    {
        if (!(s[i]==' ' && s[i+1]==' '))
        {
            s[j]=s[i];
            j++;
        }
    }
    s[j]=0;
    printf("Ket qua: ");
    puts(s);
    return 0;
}
