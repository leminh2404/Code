#include "bits/stdc++.h"
#include "stdlib.h"
#include "conio.h"
using namespace std;
void mang(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout << " a["<<i<<"] = ";
		cin >> *(a+i);
	}
	cout << " Mang vua nhap la:";
	for(int i=0;i<n;i++)
	{
		cout << " " << *(a+i);
	}
}
void chenmang(int *a,int *b, int n)
{
	int m,l;
	cout << "\n Nhap so can chen: ";
	cin >> m;
	do
	{
	cout << " Nhap vi tri can chen: ";
	cin >> l;
    }
    while(l>n);
	int k=l;
	for(int l=0;l<k-1;l++)
		{
		    b[l]=a[l];
	    }
	    b[l-1]=m;
	for(int l=k;l<n+1;l++)
	    {
	   	    b[l]=a[l-1];
	    }   
	cout << " Mang sau khi chen la:";
	for(int i=0;i<n+1;i++)
		{
			cout << " " << *(b+i);
		}
}
int main()
{
	int n, *b, *a;
	cout << " Nhap so phan tu cua mang: ";
	cin >> n;
	a=new int[n];
	b=new int[n+1];
	mang(a,n);
	chenmang(a,b,n);
	getch();
}
