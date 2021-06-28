t#include <stdio.h>
#include <conio.h>
#include <string.h>

void Xoa_khoang_trang_thua(char Hoten[], int k)
{
    int j,i;
    for (i=0;i<k;i++)
    {
        if (Hoten[i]==' ')
        {
            if (Hoten[i+1]==' ')
            {
                for (int j=i+1;j<=k;j++)
                {
                    Hoten[j]=Hoten[j+1];
                }
             i--;
            }
        }
    }
}

void Doi_chu_in_hoa(char Hoten[])
{
    int i=1;
    Hoten[0]=toupper(Hoten[0]);
    while (Hoten[i]!='\0')
    {
        if (Hoten[i]==' ') Hoten[i+1]-=32;
        i++;
    }
}

int main()
{
    char str[50],Hoten[50];
    int k;
    printf("Nhap chuoi ho ten: "); gets(str);
    strlwr(str);
    //puts(str);
    for (k=0;k<strlen(str);k++)
    {
        if (str[k]>=97 && str[k]<=122) break; // tim vi tri cua ki tu dau tien khac dau cach
    }
    strcpy(Hoten,str+k);
    //puts(Hoten);
    for (k=strlen(Hoten)-1;k>=0;k--)
    {
        if (Hoten[k]>=97 && Hoten[k]<=122) break;
    }
    Xoa_khoang_trang_thua(Hoten,k);
    for (k=strlen(Hoten)-1;k>=0;k--)
    {
        if (Hoten[k]>=97 && Hoten[k]<=122) break;
    }
    Hoten[k+1]='\0';
    //puts(Hoten);
    Doi_chu_in_hoa(Hoten);
    printf("Chuoi ho ten sau khi da chuan hoa:\n");
    puts(Hoten);
    getch();
    return 0;
}


