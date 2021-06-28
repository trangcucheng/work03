#include <stdio.h>
#include <conio.h>

void Nhap(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}

void In(int arr[], int n)
{
    for (int i=0;i<n;i++) printf("%d   ",arr[i]);
}

void SapXep(arr[], int n)
{

}

int main()
{
  int arr[50],n;
  printf("Nhap so phan tu cua mang: ");
  scanf("%d",&n);
  Nhap(arr,n);
  printf("Mang vua nhap la:\n");
  In(arr,n);

}
