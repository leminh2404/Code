#include "iostream"
#include "cstdlib"
#include "cstring"
using namespace std;
typedef struct Sinhvien
{
    int masv;
    string tensv;
    string lop;
    float dtk;
    string hk;
} SV;
typedef struct Node
{
    SV data;
    Node *next;
} NODE;
void taodulieu(SV &a)
{
    cout << " Nhap ma sinh vien: ";
    cin >> a.masv;
    cout << " Nhap ten sinh vien: ";
    fflush(stdin);
    getline(cin, a.tensv);
    cout << " Nhap lop: ";
    fflush(stdin);
    getline(cin, a.lop);
    cout << " Nhap diem tong ket: ";
    cin >> a.dtk;
    cout << " Nhap hanh kiem: ";
    fflush(stdin);
    getline(cin, a.hk);
    cout << "\n";
}
NODE *taonode(SV x)
{
    NODE *tmp = new NODE;
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
NODE *chencuoi(NODE *&Head, SV x)
{
    NODE *tmp = taonode(x);
    if (Head == NULL)
    {
        Head = tmp;
        return Head;
    }
    else
    {
        NODE *p = Head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tmp;
        return Head;
    }
}
void duyet(NODE *Head)
{
    NODE *p = Head;
    while (p != NULL)
    {
        cout << " Ma sinh vien: " << p->data.masv << ", ho ten: " << p->data.tensv << ", lop: " << p->data.lop << ", diem tong ket: " << p->data.dtk << ", hanh kiem: " << p->data.hk << endl;
        p = p->next;
    }
}
int main()
{
    NODE *Head = NULL;
    int n;
    cout << " Nhap n: ";
    cin >> n;
    SV *a = new SV[n];
    for (int i = 0; i < n; i++)
    {
        taodulieu(a[i]);
        chencuoi(Head, a[i]);
    }
    duyet(Head);
    string b = "D13CNPM";
    for (NODE *p = Head; p != NULL; p = p->next)
    {
        if (p->data.lop == b)
        {
            cout << " Sinh vien D13CNPM: \n";
            cout << " Ma sinh vien: " << p->data.masv << ", ho ten: " << p->data.tensv << ", diem tong ket: " << p->data.dtk << ", hanh kiem: " << p->data.hk;
        }
    }
}