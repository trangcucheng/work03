#include<stdio.h>
void nhap(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("nhap phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
int max(int a[],int n){
	int max=a[0];
	int i;
	for(i=0;i<n;i++){
		if(max<a[i]){
		max=a[i];
		}
	}
	return max;
}
int sothuhai(int a[],int n){
	int j,i;
	max(a,n);
	//printf("%d",max(a,n));
	for(i=0;i<n;i++){

		for(j=i+1;j<n;j++){
			if(a[j]=max-i) break;
		}
	}
	return a[j];
}
int main(){
	int a[100];
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	nhap(a,n);
	max(a,n);
	sothuhai(a,n);
	printf("%d",sothuhai(a,n));
	return 0;

}
