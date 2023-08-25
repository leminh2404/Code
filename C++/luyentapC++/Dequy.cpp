#include "iostream"
using namespace std;
void tower_of_hanoi(int num, string source, string dest, string helper)
{
    if (num == 1)
    {
        cout << " Chuyen dia 1 tu cot " << source << " den cot " << dest << endl;
        return;
    }
    tower_of_hanoi(num - 1, source, helper, dest);
    cout << " Chuyen dia " << num << " tu cot " << source << " den cot " << dest << endl;
    tower_of_hanoi(num - 1, helper, dest, source);
}
int main()
{
    int num; // só luong dia
    cin >> num;
    printf("Cach thuc di chuyen dia :\n");
    tower_of_hanoi(num, "A", "B", "C");
    return 0;
}