#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char HoTen[50],HoLot[50],Ten[50];
    int i,n;
    printf("Nhap ho va ten: ");
    gets(HoTen);
    n=strlen(HoTen);
    for (i=n-1;i>=0;i--)
    {
        if (HoTen[i]==' ') break;
    }
    int vt=i;
    strcpy(Ten,HoTen+vt+1);
    HoTen[vt]='\0';
    strcpy(HoLot,HoTen);
    printf("Ket qua: \nHo lot: %s\nTen: %s", HoLot,Ten);
    getch();
    return 0;
}

