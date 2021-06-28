#include <stdio.h>
#include <conio.h>
#include <string.h>

void TachHoVaTen(char HoTen[], char Ten[] ) // s1=HoTen1 la chuoi ca ho va ten s3=Ten chuoi chi co ten
{
    int i,n;
    n=strlen(HoTen);
    for (i=n-1;i>=0;i--)
    {
        if (HoTen[i]==' ') break;
    }
    strcpy(Ten,HoTen+i+1); // s3 chua ten
}

void SapXep(char HoTen[][50], char Ten[][50], int n) //s1 la mang chua ho va ten s2 la mang chua ten
{
    int i,j,k;
    char s1[50],s2[50];
    for (i=0;i<n-1;i++) // i la bien chay cua so luong hoc sinh
    {
        for (j=i+1;j<n;j++)
        {
            if (Ten[i][0]>Ten[j][0])
            {
                strcpy(s1,Ten[i]);
                Ten[i][0]='\0';
                strcpy(Ten[i],Ten[j]);
                Ten[j][0]='\0';
                strcpy(Ten[j],s1);
                strcpy(s2,HoTen[i]);
                HoTen[i][0]='\0';
                strcpy(HoTen[i],HoTen[j]);
                HoTen[j][0]='\0';
                strcpy(HoTen[j],s2);
            }
            else if (Ten[i][0]==Ten[j][0])
            {
                if (Ten[i][1]>Ten[j][1])
                {
                    strcpy(s1,Ten[i]);
                    Ten[i][0]='\0';
                    strcpy(Ten[i],Ten[j]);
                    Ten[j][0]='\0';
                    strcpy(Ten[j],s1);
                    strcpy(s2,HoTen[i]);
                    HoTen[i][0]='\0';
                    strcpy(HoTen[i],HoTen[j]);
                    HoTen[j][0]='\0';
                    strcpy(HoTen[j],s2);
                }
            }
        }
    }
}

void InDanhSach(char s[][50],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("\n%d. %s",i+1,s[i]);
    }
}
int main()
{
    char HoTen[50][50],Ten[50][50];
    int n,i=0;
    printf("Nhap so luong hoc sinh: ");
    scanf("%d",&n);
    while (i<n)
    {
        printf("Nhap ho ten hoc sinh thu %d: ",i+1);
        fflush(stdin);
        gets(HoTen[i]);
        i++;
    }
    printf("\nDanh sach nhap vao:\n");
    InDanhSach(HoTen,n);
    for (i=0;i<n;i++)
    {
        TachHoVaTen(HoTen[i],Ten[i]);
    }
    printf("\nDanh sach ten:\n");
    InDanhSach(Ten,n);
    SapXep(HoTen,Ten,n);
    printf("\nDanh sach hoc sinh da sap xep:\n");
    InDanhSach(HoTen,n);
    getch();
    return 0;
}
