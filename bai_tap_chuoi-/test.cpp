#include <iostream>
#include <string.h>
int main()
{

char t[50],r[50]; int i,l;
for(i=strlen(s)-1;i>=0;i--) if(s[i]==' ')
break;
strcpy(r,s+i+1);//tim dctu cuoi
s[i+1]='\0';//xau s sau khi bo tu cuoi,co khoang trang o cuoi xau
l=strlen(s)-strlen(strstr(s," ")); //tim vi tri khoang trang dau tien trong chuoi
strcpy(t,s+l+1);//l la xau chua cac tu chinh giua s[l]='\0'; //hien tai la xau chua tu dau tien
strcat(strcat(strcat(r," "),t),s);//noi cac xau lai voi nhau*
puts(r);
}
