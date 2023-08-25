#include "iostream"
#include "cstdlib"
#include "cstring"
using namespace std;
typedef struct Hocvien
{
    int mahv;
    string tenhv;
    string lop;
    string cn;
    float dtk;
} HV;
typedef struct Node
{
    HV data;
    Node *next;
    Node *pre;
} NODE;
void create(HV &a)
{
    cout << " Nhap ma hoc vien: ";
    cin >> a.mahv;
    cout << " Nhap ten hoc vien: ";
    fflush(stdin);
    getline(cin, a.tenhv);
    cout << " Nhap lop: ";
    getline(cin, a.lop);
    cout << " Nhap chuyen nganh: ";
    fflush(stdin);
    getline(cin, a.cn);
    cout << " Nhap diem tong ket: ";
    cin >> a.dtk;
}
NODE *createnode(HV a)
{
    NODE *tmp = new NODE;
    tmp->data = a;
    tmp->next = NULL;
    tmp->pre = NULL;
    return tmp;
}
NODE *addlast(NODE *&Head, NODE *&Tail, HV a)
{
    NODE *tmp = createnode(a);
    if (Head == NULL)
    {
        Head = tmp;
        Tail = Head;
        return Head;
    }
    else
    {
        Tail->next = tmp;
        tmp->pre = Tail;
        Tail = tmp;
        return Head;
    }
}
void traverse(NODE *Head)
{
    NODE *p = Head;
    while (p != NULL)
    {
        cout << "\n Ma hoc vien: " << p->data.mahv << ", ten hoc vien: " << p->data.tenhv << ", lop: " << p->data.lop << ", chuyen nganh: " << p->data.cn << ", diem tong ket: " << p->data.dtk << endl;
        p = p->next;
    }
}
int main()
{
    NODE *Head = NULL, *Tail = NULL;
    int n;
    cout << " Nhap n: ";
    cin >> n;
    HV *a = new HV[n];
    for (int i = 0; i < n; i++)
    {
        create(a[i]);
        addlast(Head, Tail, a[i]);
    }
    traverse(Head);
    string b = "Thuong mai dien tu";
    for (NODE *p = Head; p != NULL; p = p->next)
    {
        if (p->data.cn == b && p->data.dtk >= 8)
            cout << "\n Ma hoc vien: " << p->data.mahv << ", ten hoc vien: " << p->data.tenhv << ", lop: " << p->data.lop << ", chuyen nganh: " << p->data.cn << ", diem tong ket: " << p->data.dtk << endl;
    }
}