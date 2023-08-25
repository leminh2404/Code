#include "stdio.h"
#include "string.h"
#include "conio.h"
typedef struct
{
	char mamay[15];
	char tenmay[15];
	int ngay, thang, nam;
	char nhasx[15];
	int gia;
}MayTinh;
void Nhap(MayTinh a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf(" Nhap ma may cua may tinh thu %d: ",i+1);
		fflush(stdin); // Hàm fflush(stdin) phuc vu cho viec hàm gets bên duoi nó chay duoc
		gets(a[i].mamay); // Hàm gets giúp nhap duoc day ki tu co chua dau cach, trong khi hàm scanf hay cin ko lam duoc
		
		printf(" Nhap ten may: ");
		fflush(stdin);
		gets(a[i].tenmay);
		
		printf(" Nhap ngay san xuat: ");
		scanf("%d",&a[i].ngay);
		
		printf(" Nhap thang san xuat: ");
		scanf("%d",&a[i].thang);
		
		printf(" Nhap nam san xuat: ");
		scanf("%d",&a[i].nam);
		
		printf(" Nhap ten nha san xuat: ");
		fflush(stdin);
		gets(a[i].nhasx);
		
		printf(" Nhap gia cua may tinh: ");
		scanf("%d",&a[i].gia);
	}
}
void Xuat(MayTinh a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf(" Ma may cua may tinh thu %d la: %s, ten cua may thu %d la: %s, ngay san xuat cua may do la: %d/%d/%d, ten nha san xuat cua may do la: %s, gia cua may tinh do la: %d",i+1,a[i].mamay,i+1,a[i].tenmay,a[i].ngay,a[i].thang,a[i].nam,a[i].nhasx,a[i].gia);
		printf("\n");
	}
}
void nsxSAMSUNG(MayTinh a[], int n)
{
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(strcmp(a[i].nhasx,"SAMSUNG")==0)// Hàm strcmp là hàm so sánh chuõi, =0 thì 2 chuoi bang nhau, > 0 thi chuoi 1 lon hon chuoi 2, < 0 thi chuoi 1 nho hon chuoi 2
		{
			t++;
		}
	}
	if(t!=0)
	{
		printf("\n May tinh thuoc nha san xuat SAMSUNG la:");
	    {
		    for(int i=0;i<n;i++)
	        {
		        if(strcmp(a[i].nhasx,"SAMSUNG")==0)
		        {    
			        printf(" %s, %s",a[i].mamay,a[i].tenmay);
		        }
	        }
	    }
    }
	else
	printf("\n Khong co may nao cua nha san xuat SAMSUNG");
}
void namsx2020(MayTinh a[], int n)
{
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].nam==2020)
	    t++;
	}
	if(t!=0)
	{
		printf("\n May tinh co nam san xuat 2020 la:");
		for(int i=0;i<n;i++)
	    {
		    if(a[i].nam==2020)
		    printf(" %s, %s", a[i].mamay, a[i].tenmay);
	    }
	}
	else
	printf("\n Khong co may nao san xuat nam 2020");
}
int main()
{
    MayTinh a[20];
    int n;
    printf(" Nhap so may tinh can nhap thong tin: ");
    scanf("%d",&n);
    Nhap(a,n);
    printf("============================================================================================= \n");
    Xuat(a,n);
    nsxSAMSUNG(a,n);
    namsx2020(a,n);
    getch();
}
