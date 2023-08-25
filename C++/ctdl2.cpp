#include "bits/stdc++.h"
#include "string.h"
#include "conio.h"
using namespace std;
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
		cout << " Nhap ma may cua may tinh thu "<<i+1<<": ";
		fflush(stdin); // Hàm fflush(stdin) phuc vu cho viec hàm gets bên duoi nó chay duoc
		gets(a[i].mamay); // Hàm gets giúp nhap duoc day ki tu co chua dau cach, trong khi hàm scanf hay cin ko lam duoc
		cout << " Nhap ten may: ";
		fflush(stdin);
		gets(a[i].tenmay);
		cout << " Nhap ngay san xuat: ";
		cin >> a[i].ngay;
		cout << " Nhap thang san xuat: ";
		cin >> a[i].thang;
		cout << " Nhap nam san xuat: ";
		cin >> a[i].nam;
		cout << " Nhap nha san xuat: ";
		fflush(stdin);
		gets(a[i].nhasx);
		cout << " Nhap gia: ";
		cin >> a[i].gia;
	}
}
void Xuat(MayTinh a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout << " Ma cua may tinh thu "<<i+1<<" la " << a[i].mamay << ", Ten cua may "<<i+1<<" la " << a[i].tenmay << ", Ngay san xuat la " << a[i].ngay << "/" << a[i].thang<<"/"<<a[i].nam<<", Ten nha san xuat la " << a[i].nhasx<<", Gia la " << a[i].gia;
		cout << endl;
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
		cout << " May tinh thuoc nha san xuat SAMSUNG la:";
	    {
		    for(int i=0;i<n;i++)
	        {
		        if(strcmp(a[i].nhasx,"SAMSUNG")==0)
		        {    
			        cout << " " << a[i].mamay << ", " << a[i].tenmay;
		        }
	        }
	    }
    }
	else
	cout << " Khong co may nao cua nha san xuat SAMSUNG";
}
void namsx2020(MayTinh a[], int n)
{
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].namsx==2020)
	    t++;
	}
	if(t!=0)
	{
		cout << "\n May tinh co nam san xuat 2020 la: ";
		for(int i=0;i<n;i++)
	    {
		    if(a[i].namsx==2020)
		    cout << " " << a[i].mamay << ", " << a[i].tenmay;
	    }
	}
	else
	cout << "\n Khong co may nao san xuat nam 2020";
}
int main()
{
    MayTinh a[20];
    int n;
    cout << " Nhap so may tinh can nhap thong tin: ";
    cin >> n;
    Nhap(a,n);
    cout << "=============================================================================================" << endl;
    Xuat(a,n);
    nsxSAMSUNG(a,n);
    getch();
}
