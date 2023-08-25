#include "iostream"
#include "cstdlib"
#include "ctime"
using namespace std;
int main()
{
	srand(time(NULL));
	int a[6] = {0, 0, 0, 0, 0, 0};
	for (int i = 0; i < 1000; i++)
	{
		int res = rand() % (6) + 1;
		a[res - 1]++;
	}
	cout << " So lan xuat hien lan luot cua 6 mat xuc xac:\n";
	for (int i = 0; i < 6; i++)
	{
		cout << " " << i + 1 << ": " << a[i] << "\n";
	}
}