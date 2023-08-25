#include "iostream"
#include "cstring"
using namespace std;
int main()
{
	string s;
	cin >> s;
	int S=0;
	for(int i=0; i<s.size(); i++)
		S+=(int)(s[i]-'0');
	cout << S;
}