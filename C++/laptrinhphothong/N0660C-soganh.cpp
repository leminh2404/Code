#include "iostream"
using namespace std;
int main()
{
    string str;
    cin >> str;
    int res = 0, x = 0;
    for (int i = str.length() / 2 + 1; i < str.length(); i++)
    {
        if (str[0] == str[i])
        {
            for (int j = i; j < str.length(); j++)
            {
                if (str[x] == str[j])
                {
                    res++;
                    x++;
                }
                else
                {
                    res = 0;
                    x = 0;
                    continue;
                }
            }
        }
    }
    if (res == 0)
        cout << "-1";
    else
        cout << res;
}