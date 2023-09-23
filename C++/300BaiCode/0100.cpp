#include "iostream"
#include "vector"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int *a = new int[n];
    int max, min;
    int maxIndex, minIndex;
    vector<int> maxVectorIndex;
    vector<int> minVectorIndex;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            max = min = a[0];
        if (a[i] > max)
        {
            maxVectorIndex.clear();
            max = a[i];
            maxVectorIndex.push_back(i);
        }
        else if (a[i] == max)
        {
            maxVectorIndex.push_back(i);
        }
        if (a[i] < min)
        {
            minVectorIndex.clear();
            min = a[i];
            minVectorIndex.push_back(i);
        }
        else if (a[i] == min)
        {
            minVectorIndex.push_back(i);
        }
    }
    if (max == min)
    {
        cout << max;
        for (int i = 0; i < maxVectorIndex.size(); i++)
            cout << " " << maxVectorIndex[i];
    }
    else
    {
        cout << max;
        for (int i = 0; i < maxVectorIndex.size(); i++)
            cout << " " << maxVectorIndex[i];
        cout << "\n"
             << min;
        for (int i = 0; i < minVectorIndex.size(); i++)
            cout << " " << minVectorIndex[i];
    }
}