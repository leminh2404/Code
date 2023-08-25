#include "iostream"
#include "cmath"
#include "cstring"
using namespace std;
int main()
{
    string s;
    int k;                      // zqg omo nmz ztuz ftm kotg zmk ftu omo nmz pm bmee cgm yaz mfnyff    egxmsrw  zaftuzsuybaeeunxq    CSYEVIXIVQMREXIH
    int *a = new int[123];      // luu tru gia tri cua ki tu 0-25
    string *c = new string[26]; // chuyen doi tu so sang ki tu tuong ung
    cout << " Nhap chuoi ki tu ma hoa: ";
    getline(cin, s);
    cout << " Nhap k: ";
    cin >> k;
    int b = 0;
    for (int i = 97; i <= 122; i++)
    {
        a[i] = b;
        b++;
    }
    b = 97;
    for (int i = 0; i <= 25; i++)
    {
        c[i] = b;
        b++;
    }
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            res += ' ';
            continue;
        }
        for (int j = 97; j <= 122; j++)
            if (s[i] == j)
            {
                if (a[j] >= k)
                    res += c[(a[j] - k) % 26];
                else
                    res += c[(a[j] + k) % 26];
            }
    }
    cout << " Sau khi giai ma: " << res << endl;
    system("pause");
}