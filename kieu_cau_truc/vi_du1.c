#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct
{
    unsigned char Ngay;
    unsigned char Thang;
    unsigned int Nam;
}KieuNgayThang;

typedef struct
{
    char MSSV[10];
    char HoTen[50];
    KieuNgayThang NgaySinh;
    int Phai;
    char DiaChi[40];
}KieuSinhVien;
// Ham in ra man hinh thong itn cua mot sinh vien

void InSV(KieuSinhVien s)
{
    printf("MSSV: | Ho Ten | Ngay Sinh | Dia Chi\n");
    printf("%s    |   %s    | %d-%d-%d  | %s\n",s.MSSV,s.HoTen,s.NgaySinh.Ngay,s.NgaySinh.Thang,s.NgaySinh.Nam,s.DiaChi);
}

int main()
{
    KieuSinhVien SV,s;
    printf("Nhap MSSV: "); gets(SV.MSSV);
    printf("Nhap ho va ten: "); gets(SV.HoTen);
    printf("Sinh ngay: "); scanf("%d",&SV.NgaySinh.Ngay);
    printf("Thang sinh: "); scanf("%d",&SV.NgaySinh.Thang);
    printf("Nam sinh: "); scanf("%d",&SV.NgaySinh.Nam);
    fflush(stdin);
    printf("Nhap dia chi: "); gets(SV.DiaChi);
    InSV(SV);
    //s=SV;
    //InSV(s);
    getch;
    return ;
}
