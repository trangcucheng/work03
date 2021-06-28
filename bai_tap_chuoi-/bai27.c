#include "stdio.h"
#include "conio.h"
#include "string.h"

int main()
{
    char so[10][5]={"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin"}

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


