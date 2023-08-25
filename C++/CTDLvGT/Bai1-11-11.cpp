#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
typedef struct Congtrinh
{
    int mact;
    string tenct;
    string qmct;
    float tkp;
} CT;
struct node
{
    CT data;
    node *next;
    node *pre;
};
typedef struct node *NODE;
typedef struct list
{
    NODE Head;
    NODE Tail;
} LIST;
void first(LIST &a)
{
    a.Head = NULL;
    a.Tail = NULL;
}
void input(CT &a)
{
    cout << "\n Nhap ma cong trinh: ";
    cin >> a.mact;
    cout << " Nhap ten cong trinh: ";
    cin.ignore();
    getline(cin, a.tenct);
    cout << " Nhap quy mo cong trinh: ";
    getline(cin, a.qmct);
    cout << " Nhap tong kinh phi: ";
    cin >> a.tkp;
}
bool empty(LIST a)
{
    if (a.Head == NULL)
        return true;
    return false;
}
NODE createnode(CT a)
{
    NODE tmp = new node;
    tmp->data = a;
    tmp->next = NULL;
    tmp->pre = NULL;
    return tmp;
}
void ifnull(LIST &a, NODE b)
{
    a.Head = b;
    a.Tail = a.Head;
}
void addfirst(LIST &a, CT b)
{
    NODE tmp = createnode(b);
    if (a.Head == NULL)
    {
        ifnull(a, tmp);
        return;
    }
    tmp->next = a.Head;
    a.Head->pre = tmp;
    a.Head = tmp;
    a.Head->pre = NULL;
}
void del(LIST &a, int pos)
{
    NODE p = a.Head;
    int k = 0;
    while (p != NULL)
    {
        k++;
        p = p->next;
    }
    if (pos >= k)
    {
        p = a.Head;
        a.Head = p->next;
        a.Head->pre = NULL;
        delete (p);
    }
    else if (pos <= 1)
    {
        p = a.Tail;
        a.Tail = p->pre;
        a.Tail->next = NULL;
        delete (p);
    }
    else
    {
        p = a.Tail;
        k = 0;
        while (k != pos - 1)
        {
            k++;
            p = p->pre;
        }
        p->next->pre = p->pre;
        p->pre->next = p->next;
        free(p);
    }
}
void traverse(LIST a)
{
    NODE p = a.Head;
    while (p != NULL)
    {
        cout << "\n Ma cong trinh: " << p->data.mact << ", ten cong trinh: " << p->data.tenct << ", quy mo cong trinh: " << p->data.qmct << ", tong kinh phi: " << p->data.tkp;
        p = p->next;
    }
}
void tkp510(LIST a)
{
    NODE p = a.Tail;
    while (p != NULL)
    {
        if (p->data.tkp >= 5000 and p->data.tkp <= 10000)
            cout << "\n Ma cong trinh: " << p->data.mact << ", ten cong trinh: " << p->data.tenct << ", quy mo cong trinh: " << p->data.qmct << ", tong kinh phi: " << p->data.tkp;
        p = p->next;
    }
}
int dem(LIST a)
{
    NODE p = a.Head;
    int k = 0;
    while (p != NULL)
    {
        k++;
        p = p->next;
    }
    return k;
}
int demma(LIST a, int n)
{
    int k = 0;
    NODE p = a.Head;
    while (p != NULL)
    {
        if (p->data.mact == n)
            k++;
        p = p->next;
    }
    return k;
}
void delma(LIST &a, int n)
{
    NODE p, q;
    if (demma(a, n) == 0)
    {
        cout << "\n Khong tim thay ma vua nhap de xoa!";
        return;
    }
    while (demma(a, n) != 0)
    {
        p = a.Head;
        if (a.Head->data.mact == n)
        {
            if (a.Head->data.mact == a.Tail->data.mact && dem(a) == 1)
            {
                a.Head = a.Tail = NULL;
                free(p);
                return;
            }
            a.Head = a.Head->next;
            a.Head->pre = NULL;
            free(p);
            continue;
        }
        if (a.Tail->data.mact == n)
        {
            q = a.Tail;
            a.Tail = a.Tail->pre;
            a.Tail->next = NULL;
            free(q);
            continue;
        }
        while (p != NULL)
        {
            if (p->data.mact == n)
            {
                p->pre->next = p->next;
                p->next->pre = p->pre;
                free(p);
                continue;
            }
            p = p->next;
        }
    }
}
int main()
{
    LIST a;
    first(a);
    int n;
    cout << " Nhap n: ";
    cin >> n;
    CT *b = new CT[n];
    for (int i = 0; i < n; i++)
    {
        input(b[i]);
        addfirst(a, b[i]);
    }
    traverse(a);
    cout << "\n Thong tin cac du an co kinh phi tu 5000->10000 ty: ";
    tkp510(a);
    int c;
    cout << "\n Nhap ma cong trinh muon xoa: ";
    cin >> c;
    delma(a, c);
    traverse(a);
    if (empty(a))
        cout << "\n Danh sach rong!";
}