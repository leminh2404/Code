#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
struct Duan
{
    int mada;
    float Sda;
    string chudautu;
    Duan *pre;
    Duan *next;
};
typedef struct Duan *DUAN;
DUAN taonode(int x, float y, string z)
{
    DUAN tmp = new struct Duan;
    tmp->mada = x;
    tmp->Sda = y;
    tmp->chudautu = z;
    tmp->pre = NULL;
    tmp->next = NULL;
    return tmp;
}
DUAN them1ptudaudslkdoi(DUAN &Head, int x, float y, string z)
{
    DUAN tmp = taonode(x, y, z);
    if (Head == NULL)
    {
        Head = tmp;
        return Head;
    }
    else
    {
        tmp->next = Head;
        tmp->pre = NULL;
        Head = tmp;
        return Head;
    }
}
DUAN them1ptucuoidslkdoi(DUAN &Head, DUAN &Tail, int x, float y, string z)
{
    DUAN tmp = taonode(x, y, z);
    if (Head == NULL)
    {
        Head = tmp;
        Tail = Head;
        return Head;
    }
    else
    {
        DUAN p = Head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tmp;
        tmp->pre = Tail;
        Tail = tmp;
        return Head;
    }
}
DUAN chencuoi(DUAN &Head, DUAN &Tail, int x, float y, string z)
{
    DUAN tmp = taonode(x, y, z);
    if (Head == NULL)
    {
        Head = tmp;
        Tail = Head;
        return Head;
    }
    else
    {
        DUAN p = Head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tmp;
        tmp->pre = Tail;
        Tail = tmp;
        return Head;
    }
}
DUAN Duyet(DUAN Head)
{
    DUAN p = Head;
    while (p != NULL)
    {
        cout << " Ma du an: " << p->mada << ", dien tich du an: " << p->Sda << ", chu dau tu: " << p->chudautu << endl;
        p = p->next;
    }
    return Head;
}
int main()
{
    DUAN Head = NULL;
    DUAN Tail = NULL;
    int n;
    cout << " Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        float y;
        string z;
        cout << " Nhap ma du an: ";
        cin >> x;
        cout << " Nhap dien tich du an: ";
        cin >> y;
        cout << " Nhap chu dau tu: ";
        cin.ignore();
        getline(cin, z);
        them1ptucuoidslkdoi(Head, Tail, x, y, z);
    }
    Duyet(Head);
    cout << " " << Tail << " " << Tail->pre << " " << Tail->next << endl;
    cout << " Nhap du an can chen vao cuoi: " << endl;
    int x;
    float y;
    string z;
    cout << " Nhap ma du an: ";
    cin >> x;
    cout << " Nhap dien tich du an: ";
    cin >> y;
    cout << " Nhap chu dau tu: ";
    cin.ignore();
    getline(cin, z);
    chencuoi(Head, Tail, x, y, z);
    Duyet(Head);
    cout << " " << Tail << " " << Tail->pre << " " << Tail->next << endl;
    cout << " " << Head->mada << " " << Tail->pre->next->mada;
}