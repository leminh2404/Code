#include "stdio.h"
#include "math.h"
using namespace std;
int main()
{
	int a[50],n,i,x=0,y=0,z=0,t=0,u=0,v=0;
	float T1=0,T2=0,T3=0,T4=0,T5=0,T6=0;
	printf(" Nhap so phan tu cho mang: ");
	scanf("%d",&n);	
	for(int i=0;i<n;i++){
		printf("\n a[%d]= ",i);
		scanf("%d",&a[i]);
	}printf("\n Mang vua nhap la: ");
	for(int i=0;i<n;i++) printf(" %d",a[i]);
	printf("\n Cac so chan trong mang: ");
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
		printf(" %d",a[i]);
		T1+=a[i];
		x++;
	}
	}printf("\n++ Tong cac phan tu chan trong mang = %d",T1); 
	printf("\n+++ TBC cac phan tu chan trong mang = %0.2f",T1/x); 	 
	printf("\n Cac so le trong mang: ");
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
		printf(" %d",a[i]);
		T2+=a[i];
		y++;
	}
	}printf("\n++ Tong cac phan tu le trong mang = %d",T2);
	printf("\n+++ TBC cac phan tu le trong mang = %0.2f",T2/y); 
	printf("\n Cac so am trong mang: ");
	for(int i=0;i<n;i++){
	    if(a[i]<0){
		printf(" %d",a[i]);
		T3+=a[i];
		z++;
	}	
	}printf("\n++ Tong cac phan tu am trong mang = %d",T3);
	printf("\n+++ TBC cac phan tu am trong mang = %0.2f",T3/z);
	printf("\n Cac so duong trong mang: ");
	for(int i=0;i<n;i++){
		if(a[i]>=0){
		printf(" %d",a[i]);
		T4+=a[i];
		t++;
	}
	}printf("\n++ Tong cac phan tu duong trong mang = %d",T4);
	printf("\n+++ TBC cac phan tu duong trong mang = %0.2f",T4/t);
	printf("\n Cac so nguyen to trong mang:");
	for(int i=0;i<n;i++){
		if(a[i]==2){
		printf(" %d",a[i]);
		T5=2;
		u=1;
	}
	}for(int i=0;i<n;i++){
    	int dem=0;
    	if(a[i]>0){
			for(int b=2;b<=sqrt(a[i]);b++) if(a[i]%b==0) dem++;
    	if(dem==0&&a[i]!=1&&a[i]!=2){
    		printf(" %d",a[i]);
    		T5+=a[i];
    		dem++;
    		u++;
		}
		}    
	}printf("\n++ Tong cac so nguyen to trong mang = %d",T5);
	printf("\n+++ TBC cac so nguyen to trong mang = %0.2f",T5/u);
	printf("\n Cac so chinh phuong trong mang:");
    for(int i=0;i<n;i++){
    	float h=sqrt(a[i]);
		if(h==(int)h){
			printf(" %d",a[i]);
			T6+=a[i];
			v++;
		}
	}printf("\n++ Tong cac so chinh phuong trong mang = %d",T6);
	printf("\n+++ TBC cac so chinh phuong trong mang = %0.2f",T6/v);
	int max=a[0];
	for(int i=1;i<n;i++) if(a[i]>max) max=a[i];
	printf("\n So lon nhat trong mang la: %d",max);
	int min=a[0];
	for(int i=0;i<n;i++) if(a[i]<min) min=a[i];
	printf("\n So nho nhat trong mang la: %d",min);
	int amax=min;
	if(amax>0) printf("\n Khong co so am lon nhat trong mang ");
	else if(amax<0) for(int i=0;i<n;i++) if(a[i]>amax&&a[i]<0) amax=a[i];
	printf("\n So am lon nhat la: %d",amax);
	int dmin=max;
	if(dmin<0) printf("\n Khong co so duong nho nhat trong mang");
	else if(dmin>0) for(int i=0;i<n;i++) if(a[i]<dmin&&a[i]>0) dmin=a[i];
	printf("\n So duong nho nhat la: %d",dmin);
	system("pause");
	return 0;	
}
