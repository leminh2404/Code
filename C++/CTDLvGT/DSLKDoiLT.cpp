#include "iostream"
#include "cstdlib"
#include "cstring"
#include "conio.h"
using namespace std;
typedef struct SinhVien
{
    string Hoten;
    string masv;
    int ns;
} SV;
struct Node
{
    SV data;
    Node *next;
    Node *pre;
};
typedef struct Node NODE;
void createdata(SV &a)
{
    cout << "\n Nhap ho ten: ";
    fflush(stdin);
    getline(cin, a.Hoten);
    cout << " Nhap ma sinh vien: ";
    fflush(stdin);
    getline(cin, a.masv);
    cout << " Nhap nam sinh: ";
    cin >> a.ns;
}
NODE *create(SV x)
{
    NODE *tmp = new NODE;
    tmp->next = NULL;
    tmp->pre = NULL;
    tmp->data = x;
    return tmp;
}
NODE *addfirst(NODE *&Head, NODE *&Tail, SV x)
{
    NODE *tmp = create(x);
    if (Head == NULL)
    {
        Head = tmp;
        Tail = Head;
        return Head;
    }
    else
    {
        tmp->next = Head;
        Head->pre = tmp;
        Head = tmp;
        return Head;
    }
}
NODE *addlast(NODE *&Head, NODE *&Tail, SV x)
{
    NODE *tmp = create(x);
    if (Head == NULL)
    {
        addfirst(Head, Tail, x);
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
int size(NODE *Head)
{
    int k = 0;
    NODE *p = Head;
    while (p != NULL)
    {
        k++;
        p = p->next;
    }
    return k;
}
NODE *addmid(NODE *&Head, NODE *&Tail, SV x, int pos)
{
    int k = size(Head);
    if (pos == 1)
    {
        addfirst(Head, Tail, x);
        return Head;
    }
    if (pos > k)
    {
        cout << "\n Loi vi tri! Thuc hien chen vao cuoi DSLK";
        addlast(Head, Tail, x);
        return Head;
    }
    else
    {
        NODE *tmp = create(x);
        NODE *p = Head;
        for (int i = 1; i < pos; i++)
        {
            p = p->next;
        }
        tmp->next = p;
        p->pre->next = tmp;
        tmp->pre = p->pre;
        p->pre = tmp;
        return Head;
    }
}
void traverse(NODE *Head)
{
    NODE *p = Head;
    while (p != NULL)
    {
        cout << "\n Ho va ten" << p->data.Hoten << ", ma sinh vien: " << p->data.masv << ", nam sinh: " << p->data.ns;
        p = p->next;
    }
}
int main()
{
    NODE *Head = NULL;
    NODE *Tail = NULL;
    int n;
    cout << " Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        SV a;
        createdata(a);
        addlast(Head, Tail, a);
    }
    traverse(Head);
    int pos;
    do
    {
        cout << "\n Nhap vi tri muon chen: ";
        cin >> pos;
    } while (pos <= 0);
    SV a;
    createdata(a);
    addmid(Head, Tail, a, pos);
    traverse(Head);
    cout << "\n " << Head->pre << " " << Tail->next;
    getch();
}