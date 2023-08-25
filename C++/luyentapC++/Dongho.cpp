#include "iostream"
#include "cstdlib"
#include "unistd.h"
using namespace std;
int main()
{
	int h = 0, m = 0, s = 0;
	while (true)
	{
		system("cls");
		s++;
		if (s == 60)
		{
			s = 0;
			m++;
		}
		if (m == 60)
		{
			m = 0;
			h++;
		}
		cout << "     |" << h << "|" << m << "|" << s << "|";
		sleep(1);
	}
}