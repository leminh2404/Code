#include "iostream"
#include "cstdlib"
#include "numeric"
#include "conio.h"
int Sts = 0, Sms = 1, ucln;
using namespace std;
typedef struct PhanSo
{
    int ts, ms;
} PS;
struct queue
{
    PS info;
    queue *next;
};
typedef struct queue *QUEUE;
typedef struct list
{
    QUEUE Head;
    QUEUE Tail;
} LIST;
void first(LIST &a)
{
    a.Head = NULL;
    a.Tail = NULL;
}
bool isempty(LIST a)
{
    if (a.Head == NULL)
        return true;
    return false;
}
void del(QUEUE a)
{
    free(a);
}
void createdata(PS &a)
{
    cout << " Nhap tu so: ";
    cin >> a.ts;
    cout << " Nhap mau so: ";
    cin >> a.ms;
}
QUEUE createnode(PS b)
{
    QUEUE tmp = new struct queue;
    tmp->info = b;
    tmp->next = NULL;
    return tmp;
}
void addlast(LIST &a, PS b)
{
    QUEUE tmp = createnode(b);
    if (isempty(a))
    {
        a.Head = tmp;
        a.Tail = a.Head;
        return;
    }
    a.Tail->next = tmp;
    a.Tail = tmp;
}
void tong(LIST a)
{
    QUEUE p = a.Head;
    while (p != NULL)
    {
        Sts = Sts * p->info.ms + p->info.ts * Sms;
        Sms = Sms * p->info.ms;
        p = p->next;
    }
    ucln = gcd(Sts, Sms);
}
void traverse(LIST &a)
{
    QUEUE p = a.Head;
    cout << "\n Phan so: " << p->info.ts << "/" << p->info.ms;
    a.Head = a.Head->next;
    del(p);
}
int main()
{
    LIST a;
    first(a);
    int n;
    cout << " Nhap n: ";
    cin >> n;
    PS *b = new PS[n];
    for (int i = 0; i < n; i++)
    {
        createdata(b[i]);
        addlast(a, b[i]);
    }
    tong(a);
    while (!isempty(a))
        traverse(a);
    cout << "\n Tong cac phan so vua nhap: " << Sts / ucln << "/" << Sms / ucln;
    if (isempty(a))
        cout << "\n Danh sach rong!";
    getch();
}