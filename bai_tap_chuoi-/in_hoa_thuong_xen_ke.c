#include "stdio.h"
#include "conio.h"
#include "string.h"

void Doi(char str[])
{
   int i=1,j;
   while (str[i]!='\0')
   {
       if (str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        i=i+2;
   }
}
 int main()
 {
     char str[50];
     printf("Nhap chuoi: ");
     gets(str);
     strupr(str);
     Doi(str);
     printf("Ket qua: %s",str);
     getch();
     return 0;
 }
