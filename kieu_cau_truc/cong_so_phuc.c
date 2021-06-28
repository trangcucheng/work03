#include <stdio.h>
#include <conio.h>

typedef struct
{
    float PhanThuc;
    float PhanAo;
}SoPhuc;
// ham nhap so phuc
SoPhuc Nhap(SoPhuc s)
{
    printf("\n\tNhap Phan Thuc: "); scanf("%f",&s.PhanThuc);
    printf("\tNhap phan ao: "); scanf("%f",&s.PhanAo);
    return s;
}
// Ham in so phuc ra man hinh
void InSP(SoPhuc s)
{
    printf("%.2f+%.2fi",s.PhanThuc,s.PhanAo);
}
// ham tinh tong hai so phuc
SoPhuc Tong(SoPhuc s3, SoPhuc s1, SoPhuc s2)
{
    s3.PhanThuc=s2.PhanThuc+s1.PhanThuc;
    s3.PhanAo=s2.PhanAo+s1.PhanAo;
    return s3;
}
int main()
{
    SoPhuc s1,s2,s3;
    printf("Nhap so phuc thu nhat: ");
    s1=Nhap(s2);
    printf("Nhap so phuc thu hai: ");
    s2=Nhap(s2);
    printf("\nSo phuc thu nhat:");
    InSP(s1);
    printf("\nSo phuc thu hai: ");
    InSP(s2);
    s3=Tong(s3,s1,s2);
    printf("\nTong cua hai so phuc vua nhap: ");
    InSP(s3);
    getch();
    return 0;
}

