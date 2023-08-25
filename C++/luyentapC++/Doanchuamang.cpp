#include "iostream"
#define for for(int i=0;i<n;i++)
using namespace std;
int main() {
	int n;
	cout << " Nhap n: ";
	cin >> n;
	int *a = new int [n];
	for {
	cout << " Nhap a["<<i<<"] = ";
	cin >> *(a+i);
	}
	cout << " Mang vua nhap la:";
	for {
	cout << " " << *(a+i);
	}
	int max=a[0], min=a[0];
	for {
	if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	cout << "\n Mang vua nhap lam trong doan ["<<min<<","<<max<<"]";
}
