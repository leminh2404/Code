#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
typedef struct ngay
{
    int ngay, thang, nam;
} NGAY;
typedef struct hang
{
    string id;
    string ten;
    NGAY ngay_xuat;
    float gia_xuat;
    void input();
    void output();
} HANG;
struct node
{
    HANG data;
    node *next;
};
typedef struct node *NODE;
bool IsEmpty(NODE Head)
{
    if (Head == NULL)
        return true;
    return false;
}
void HANG::input()
{
    cout << " Nhap ID: ";
    cin.ignore();
    getline(cin, id);
    cout << " Nhap ten: ";
    getline(cin, ten);
    cout << " Nhap ngay, thang, nam xuat: ";
    cin >> ngay_xuat.ngay >> ngay_xuat.thang >> ngay_xuat.nam;
    cout << " Nhap gia xuat: ";
    cin >> gia_xuat;
}
void HANG::output()
{
    cout << " +++ Thong tin hang :\n";
    cout << "+ ID: " << id << "\n+ ten hang: " << ten << "\n+ Ngay xuat hang: " << ngay_xuat.ngay << "/" << ngay_xuat.thang << "/" << ngay_xuat.nam << ""
         << "\n+ Gia xuat: " << gia_xuat << endl;
}
NODE createnode(HANG a)
{
    NODE tmp = new struct node;
    tmp->data = a;
    tmp->next = NULL;
    return tmp;
}
NODE push(NODE &Head, NODE &Tail, HANG a)
{
    NODE tmp = createnode(a);
    if (IsEmpty(Head))
    {
        Head = tmp;
        Tail = Head;
        return Head;
    }
    tmp->next = Head;
    Tail = Head;
    Head = tmp;
    return Head;
}
void top(NODE Head, NODE Tail)
{
    if (IsEmpty(Head))
    {
        cout << " Stack rong!";
        return;
    }
    else
    {
        NODE p = Head;
        cout << "\n+++ Thong tin hang: \n";
        cout << "+ ID: " << p->data.id << "\n+ ten hang: " << p->data.ten << "\n+ Ngay xuat hang: " << p->data.ngay_xuat.ngay << "/" << p->data.ngay_xuat.thang << "/" << p->data.ngay_xuat.nam << ""
             << "\n+ Gia xuat: " << p->data.gia_xuat << endl;
    }
}
NODE pop(NODE &Head, NODE &Tail)
{
    if (IsEmpty(Head))
        return NULL;
    else
    {
        NODE p = Head;
        Head = Head->next;
        delete (p);
        return Head;
    }
}
void findid001(NODE Head)
{
    NODE p = Head;
    int dem = 0;
    while (p != NULL)
    {
        if (p->data.id == "001")
            dem++;
        p = p->next;
    }
    if (dem == 0)
        cout << "\n Khong co hang hoa ID 001!";
    else
    {
        p = Head;
        while (p != NULL)
        {
            if (p->data.id == "001")
            {
                cout << "\n+++ Thong tin hang co ma 001: \n";
                cout << "+ ID: " << p->data.id << "\n+ ten hang: " << p->data.ten << "\n+ Ngay xuat hang: " << p->data.ngay_xuat.ngay << "/" << p->data.ngay_xuat.thang << "/" << p->data.ngay_xuat.nam << ""
                     << "\n+ Gia xuat: " << p->data.gia_xuat << endl;
            }
            p = p->next;
        }
    }
}
int main()
{
    NODE Head = NULL, Tail = NULL;
    int n;
    cout << " Nhap n: ";
    cin >> n;
    HANG *a = new HANG[n];
    for (int i = 0; i < n; i++)
    {
        a[i].input();
        push(Head, Tail, a[i]);
    }
    findid001(Head);
    cout << " Thong tin hang hoa tren bang chuyen:";
    while (!IsEmpty(Head))
    {
        top(Head, Tail);
        pop(Head, Tail);
    }
    if (IsEmpty(Head))
        cout << " Danh sach rong!";
}