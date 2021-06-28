#include "stdio.h"
#include "conio.h"
#include "string.h"

int vtkhoangtrang(char s[], int a[])
{
    int i=0,k=0;
    while (s[i]!='\0')
    {
        if (s[i]== ' ')
            {
                a[k]=i;
                k++;
            }
        i++;
    }
    return k;// k la so dau cach
}

int main()
{
    char s1[50],s2[50];
    int i,n,a[50],k;
    printf("Nhap chuoi: ");
    gets(s1);
    k=vtkhoangtrang(s1,a);
    strcpy(s2,s1+a[k-1]+1);
    strcat(s2," ");
    s1[a[k-1]]='\0';
    for (i=k-2;i>=0;i--)
    {
        strcat(s2,s1+a[i]+1);
        strcat(s2," ");
        s1[a[i]]='\0';
    }
    strcat(s2,s1);
    puts(s2);
    getch();
    return 0;
}

