#include "iostream"
#include "cstdlib"
#include "conio.h"
using namespace std;
struct node
{
    int data;
    node *next;
};
typedef struct node NODE;
NODE *taoptu(int x)
{
    NODE *tmp = new NODE;
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
NODE *themNODEvaodaudslk(NODE *Head, int x)
{
    NODE *tmp = taoptu(x);
    if (Head == NULL)
        Head = tmp;
    else
    {
        tmp->next = Head; // Ko đc đảo thứ tự 2 lệnh này do tmp mới đc tạo đag trỏ đến NULL, nếu gán ngay Head = tmp đầu tiên
        Head = tmp;       // thì sẽ mất luôn liên kết của Head tới các phần tử trước đó
    }
    return Head;
}
NODE *themNODEvaocuoidslk(NODE *Head, int x)
{
    node *tmp = taoptu(x);
    if (Head == NULL)
        Head = tmp;
    else
    {
        NODE *p = Head;
        while (p->next != NULL)
            p = p->next;
        p->next = tmp;
    }
    return Head;
}
NODE *themNODEvaobkdslk(NODE *Head, int x, int pos)
{
    if (pos == 0 || Head == NULL)
        Head = themNODEvaodaudslk(Head, x);
    else
    {
        int k = 1;
        NODE *p = Head;
        while (p->next->next != NULL && k != pos)
        {
            p = p->next;
            k++;
        }
        if (k != pos)
        {
            cout << " Ko ton tai vi tri vua nhap\n Tien hanh them NODE vao cuoi dslk";
            Head = themNODEvaocuoidslk(Head, x);
        }
        else
        {
            NODE *tmp = taoptu(x);
            tmp->next = p->next;
            p->next = tmp;
        }
    }
    return Head;
}
void Duyet(NODE *Head)
{
    cout << " Danh sach lien ket vua tao la:\n";
    while (Head != NULL)
    {
        cout << " " << Head->data;
        Head = Head->next;
    }
}
NODE *InitHead()
{
    NODE *Head;
    Head = NULL;
    return Head;
}
NODE *Nhap()
{
    NODE *Head = InitHead();
    int n, x;
    do
    {
        cout << " Nhap so luong phan tu DSLK: ";
        cin >> n;
    } while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        cout << " Nhap gia tri thu " << i << " cua NODE: ";
        cin >> x;
        Head = themNODEvaocuoidslk(Head, x);
    }
    return Head;
}
void sapxep(NODE *Head)
{
    int t;
    for (NODE *p = Head; p->next != NULL; p = p->next)
    {
        for (NODE *q = p->next; q != NULL; q = q->next)
        {
            if (p->data > q->data)
            {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
        }
    }
    NODE *p = Head;
    while (p != NULL)
    {
        cout << " " << p->data;
        p = p->next;
    }
}
int main()
{
    cout << " Tao 1 DSLK\n";
    NODE *Head = Nhap();
    Duyet(Head);
    cout << "\n Them 1 phan tu vao DSLK";
    Head = themNODEvaobkdslk(Head, 10, 3);
    Duyet(Head);
    cout << "\n DLSK sap xep tang dan: ";
    sapxep(Head);
    Duyet(Head);
    getch();
}
