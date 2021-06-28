#include "stdio.h"
#include "conio.h"

void InThuong(char s[])
{
    int i;
    while (s[i]!='\0')
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        i++;
    }
}

int main()
{
   char s[50];
   printf("Nhap chuoi: ");
   gets(s);
   InThuong(s);
   printf("Ket qua: ");
   puts(s);
   getch();
   return 0;
}
