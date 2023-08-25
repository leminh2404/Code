#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
typedef struct date
{
    int ngay, thang, nam;
} DATE;
typedef struct MonAn
{
    string id;
    string ten;
    DATE ngay_sx;
    int hsd;
    float gia;
} MA;
struct node
{
    MA data;
    node *next;
};
typedef struct node *NODE;
typedef struct list
{
    NODE Head;
    NODE Tail;
} LIST;
void input(MA &a)
{
    cout << " Nhap ID: ";
    cin >> a.id;
    cout << " Nhap ten: ";
    cin.ignore();
    getline(cin, a.ten);
    cout << " Nhap lan luot ngay, thang, nam san xuat: ";
    cin >> a.ngay_sx.ngay >> a.ngay_sx.thang >> a.ngay_sx.nam;
    cout << " Nhap han su dung: ";
    cin >> a.hsd;
    cout << " Nhap gia: ";
    cin >> a.gia;
}
void first(LIST &a)
{
    a.Head = NULL;
    a.Tail = NULL;
}
void ifnull(LIST &a, NODE b)
{
    a.Head = b;
    a.Tail = a.Head;
}
NODE createnode(MA a)
{
    NODE tmp = new struct node;
    tmp->data = a;
    tmp->next = NULL;
    return tmp;
}
void addfirst(LIST &a, MA b)
{
    NODE tmp = createnode(b);
    if (a.Head == NULL)
    {
        ifnull(a, tmp);
        return;
    }
    tmp->next = a.Head;
    a.Head = tmp;
}
void addlast(LIST &a, MA b)
{
    NODE tmp = createnode(b);
    if (a.Head == NULL)
    {
        ifnull(a, tmp);
        return;
    }
    a.Tail->next = tmp;
    a.Tail = tmp;
}
void traverse(LIST a)
{
    NODE p = a.Head;
    while (p != NULL)
    {
        cout << "\n ID: " << p->data.id << ", ten: " << p->data.ten << ", ngay san xuat: " << p->data.ngay_sx.ngay << "/" << p->data.ngay_sx.thang << "/" << p->data.ngay_sx.nam << ", han su dung: " << p->data.hsd << ", gia: " << p->data.gia;
        p = p->next;
    }
}
void findsx(LIST a)
{
    NODE p = a.Head;
    cout << "\n Thong tin mon an co ngay san xuat 05/10/2019:";
    while (p != NULL)
    {
        if (p->data.ngay_sx.ngay == 5 and p->data.ngay_sx.thang == 10 and p->data.ngay_sx.nam == 2019)
            cout << "\n ID: " << p->data.id << ", ten: " << p->data.ten << ", ngay san xuat: " << p->data.ngay_sx.ngay << "/" << p->data.ngay_sx.thang << "/" << p->data.ngay_sx.nam << ", han su dung: " << p->data.hsd << ", gia: " << p->data.gia;
        p = p->next;
    }
}
int main()
{
    LIST a;
    int n;
    cout << " Nhap n: ";
    cin >> n;
    first(a);
    MA *b = new MA[n];
    for (int i = 0; i < n; i++)
    {
        input(b[i]);
        addlast(a, b[i]);
    }
    traverse(a);
    findsx(a);
    MA c;
    input(c);
    addlast(a, c);
    traverse(a);
}