#include "iostream"
using namespace std;
int main()
{
    string str;
    cin >> str;
    int res = 0, j = 1;
    for (int i = str.length() / 2; i >= 0; i--)
    {
        if (str[i] == str[str.length() - j])
        {
            res++;
            j++;
            for (int x = i - 1; x >= 0; x--)
            {
                if (str[x] == str[str.length() - j])
                {
                    res++;
                    j++;
                }
                else
                {
                    res = -1;
                    break;
                }
            }
        }
    }
    cout << res;
}