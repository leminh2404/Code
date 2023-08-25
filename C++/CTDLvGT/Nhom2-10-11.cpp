#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
typedef struct MonHoc
{
    string id;
    string ten;
    int tc;
    string khoa_ql;
    int hk;
} MH;
struct node
{
    MH data;
    node *next;
    node *pre;
};
typedef struct list
{
    node *Head;
    node *Tail;
} LIST;
typedef struct node *NODE;
void first(LIST& a)
{
    a.Head = NULL;
    a.Tail = NULL;
}
void nhap(MH& a)
{
    cout << " Nhap id: ";
    cin.ignore();
    getline(cin, a.id);
    cout << " Nhap ten: ";
    getline(cin, a.ten);
    cout << " Nhap so tin chi: ";
    cin >> a.tc;
    cout << " Nhap khoa quan li: ";
    cin.ignore();
    getline(cin, a.khoa_ql);
    cout << " Nhap hoc ki: ";
    cin >> a.hk;
}
NODE createnode(MH a)
{
    NODE tmp = new struct node;
    tmp->data = a;
    tmp->pre = NULL;
    tmp->next = NULL;
    return tmp;
}
void ifnull(LIST& a, NODE x)
{
    a.Head = x;
    a.Tail = a.Head;
}
void addfirst(LIST& a, MH x)
{
    NODE tmp = createnode(x);
    if (a.Head == NULL)
    {
        ifnull(a, tmp);
        return;
    }
    tmp->next = a.Head;
    a.Head->pre = tmp;
    a.Head = tmp;
}
void addlast(LIST& a, MH x)
{
    NODE tmp = createnode(x);
    if (a.Head == NULL)
    {
        ifnull(a, tmp);
        return;
    }
    a.Tail->next = tmp;
    tmp->pre = a.Tail;
    a.Tail = tmp;
}
void traverse(LIST a)
{
    NODE p = a.Head;
    while (p != NULL)
    {
        cout << "\n ID: " << p->data.id << ", ten: " << p->data.ten << ", so tin chi: " << p->data.tc << ", khoa quan li: " << p->data.khoa_ql << ", hoc ki: " << p->data.hk;
        p = p->next;
    }
}
void findCNTT(LIST a)
{
    NODE p = a.Head;
    int dem = 0;
    while (p != NULL)
    {
        if (p->data.khoa_ql == "Cong nghe thong tin")
            dem++;
        p = p->next;
    }
    if (dem == 0)
        cout << "\n Khong co mon hoc thuoc khoa Cong nghe tong tin";
    else
    {
        p = a.Head;
        while (p != NULL)
        {
            cout << "\n Thong tin lop khoa CNTT:";
            if (p->data.khoa_ql == "Cong nghe thong tin")
                cout << "\n ID: " << p->data.id << ", ten: " << p->data.ten << ", so tin chi: " << p->data.tc << ", khoa quan li: " << p->data.khoa_ql << ", hoc ki: " << p->data.hk;
            p = p->next;
        }
    }
}
void sxdshktd(LIST& a)
{
    for (NODE p = a.Head; p->next != NULL; p = p->next)
        for (NODE q = p->next; q != NULL; q = q->next)
            if (p->data.hk > q->data.hk)
                swap(p, q);
}
int main()
{
    LIST a;
    first(a);
    int n;
    cout << " Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        MH b;
        nhap(b);
        addlast(a, b);
    }
    traverse(a);
    findCNTT(a);
    sxdshktd(a);
    traverse(a);
}