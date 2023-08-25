#include <iostream>
#include <math.h>
#include "conio.h"
using namespace std;
void mang(int a[],int b)
{
	for(int i=0;i<b;i++)
	{
		cout << " a[" << i << "]= ";
		cin >> a[i];
	}
	cout << " Mang vua nhap la:";
	for(int i=0;i<b;i++)
	cout << " " << a[i];
	cout << "\n Cac so le trong mang:";
	for(int i=0;i<b;i++)
	if(a[i]%2!=0)
	cout << " " << a[i];
}
int tong(int a[],int b)
{
	int T=0;
	for(int i=0;i<b;i++)
	T+=a[i];
	return T;
}
float tbc(int a[],int b)
{
	int dem=0;
	float t=0;
	for(int i=0;i<b;i++)
	if(a[i]%2!=0)
	{
		dem++;
		t+=a[i];
	}
	return t/dem;
}
void sxtang(int a[],int b)
{
	int tg;
	for(int i=0;i<b-1;i++)
	{
		for(int j=i+1;j<b;j++)
		{
			if(a[i]>a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	cout << " Mang sap xep tang dan:";
	for(int i=0;i<b;i++)
	cout << " " << a[i];
	cout << endl;
}
int MAX(int a[],int b)
{
	int max=a[0];
	for(int i=0;i<b;i++)
	{
		if(max<a[i]) max=a[i];
	}
	return max;
}
int main()
{
	int n,a[50];
	cout << " Nhap so phan tu cua mang: ";
	cin >> n;
	mang(a,n);
	cout << "\n Tong cac phan tu trong mang = " << tong(a,n) << endl;
	cout << " TBC cac so le trong mang = " << tbc(a,n) << endl;
	sxtang(a,n);
	cout << " So lon nhat trong mang la: " << MAX(a,n);
	getch();
}
