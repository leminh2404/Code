#include "iostream"
#include "vector"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int *A = new int[n];
    vector<int> g1;
    vector<int> g2;
    vector<int> g3;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        do
        {
            cin >> A[i];
        } while (A[i] < 1 || A[i] > 4);
        if (A[i] == 4)
            res++;
        if (A[i] == 1)
            g1.push_back(A[i]);
        if (A[i] == 2)
            g2.push_back(A[i]);
        if (A[i] == 3)
            g3.push_back(A[i]);
        if (!g1.empty())
            if (!g3.empty())
            {
                g1.pop_back();
                g3.pop_back();
                res++;
            }
        if (!g1.empty())
            if (!g2.empty())
            {
                g1.pop_back();
                g2.pop_back();
                g3.push_back(3);
            }
    }
    while (!g1.empty())
    {
        if (g2.empty() && g3.empty())
        {
            if (g1.size() % 4 == 0)
            {
                res += g1.size() / 4;
                g1.clear();
                break;
            }
            else
            {
                res += g1.size() / 4;
                res++;
                g1.clear();
                break;
            }
        }
        if (!g2.empty())
        {
            g2.pop_back();
            g1.pop_back();
            g3.push_back(3);
        }
        if (!g3.empty())
        {
            g3.pop_back();
            g1.pop_back();
            res++;
        }
    }
    if (g2.size() != 0 && g2.size() % 2 == 0)
    {
        res += g2.size() / 2;
    }
    else if (g2.size() != 0 && g2.size() % 2 != 0)
    {
        res += g2.size() / 2;
        res++;
    }
    res += g3.size();
    cout << res;
}