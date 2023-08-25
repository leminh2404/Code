#include <iostream>
#include <math.h>
using namespace std;
void snt1(int a)
{
	int dem=0;
	if(a==2) cout << "\n Day la so nguyen to";
	else if(a<=1) cout << "\n Day khong phai so nguyen to";
	else
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
	    {
	      dem++;	
	    }
	}
	if(dem==0&&a>2) cout << ("\n Day la so nguyen to");
	else if(dem!=0&&a>2) cout << ("\n Day khong phai so nguyen to");
}
int main()
{
	cout << " Kiem tra so nguyen to";
	A:int n;
	cout << "\n Nhap so nguyen bat ki: ";
	cin >> n;
	snt1(n);
	goto A;
}	
