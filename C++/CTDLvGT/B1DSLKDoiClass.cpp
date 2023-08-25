#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
typedef struct Khachhang
{
    int makh;
    string tenkh;
    string dc;
    string sdt;
    int tt;
} KH;
struct Node
{
    KH data;
    Node *next;
    Node *pre;
};
typedef struct Node *NODE;
void createdata(KH &a)
{
    cout << " Nhap ma khach hang: ";
    cin >> a.makh;
    cout << " Nhap ten khach hang: ";
    fflush(stdin);
    getline(cin, a.tenkh);
    cout << " Nhap dia chi: ";
    fflush(stdin);
    getline(cin, a.dc);
    cout << " Nhap so dien thoai: ";
    fflush(stdin);
    getline(cin, a.sdt);
    cout << " Nhap tong tien thanh toan: ";
    cin >> a.tt;
}
NODE createnode(KH a)
{
    NODE tmp = new struct Node;
    tmp->data = a;
    tmp->pre = NULL;
    tmp->next = NULL;
    return tmp;
}
NODE addlast(NODE &Head, NODE &Tail, KH a)
{
    NODE tmp = createnode(a);
    if (Head == NULL)
    {
        Head = tmp;
        Tail = Head;
        return Head;
    }
    Tail->next = tmp;
    tmp->pre = Tail;
    Tail = tmp;
    return Head;
}

void traverse(NODE Head)
{
    NODE p = Head;
    while (p != NULL)
    {
        cout << "\n Ma khach hang: " << p->data.makh << ", ten khach hang: " << p->data.tenkh << ", dia chi: " << p->data.dc << ", sdt: " << p->data.sdt << ", tong thanh toan: " << p->data.tt;
        p = p->next;
    }
}
void ttdown(NODE &Head)
{
    KH t;
    for (NODE p = Head; p->next != NULL; p = p->next)
    {
        for (NODE q = p->next; q != NULL; q = q->next)
        {
            if (p->data.tt < q->data.tt)
            {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
        }
    }
}
int main()
{
    NODE Head = NULL, Tail = NULL;
    int n;
    cout << " Nhap n: ";
    cin >> n;
    KH *a = new KH[n];
    for (int i = 0; i < n; i++)
    {
        createdata(a[i]);
        addlast(Head, Tail, a[i]);
    }
    traverse(Head);
    NODE p = Head;
    while (p != NULL)
    {
        if (p->data.dc == "Ha Noi")
        {
            cout << "\n Thong tin khach hang o Ha Noi: ";
            cout << "\n Ten khach hang: " << p->data.tenkh << ", dia chi: " << p->data.dc << ", sdt: " << p->data.sdt << ", tong thanh toan: " << p->data.tt;
        }
        p = p->next;
    }
    cout << "\n Sap xep khach hang theo tong thanh toan giam dan: ";
    ttdown(Head);
    traverse(Head);
}