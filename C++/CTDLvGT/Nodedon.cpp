#include "iostream"
using namespace std;
struct node
{
    int data;
    node* next;
};
typedef struct node* NODE;
NODE create(int n)
{
    NODE tmp = new struct node;
    tmp->data = n;
    tmp->next = NULL;
    return tmp;
}
typedef struct list
{
    NODE Head;
    NODE Tail;
} LIST;
void khoitao(LIST& a)
{
    a.Head = NULL;
    a.Tail = NULL;
}
void themcuoi(LIST& a, int x)
{
    NODE tmp = create(x);
    if (a.Head == NULL)
    {
        a.Head = a.Tail = tmp;
        return;
    }
    a.Tail->next = tmp;
    a.Tail = tmp;
}
void duyet(LIST a)
{
    cout << "\n";
    NODE p = a.Head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int dem(LIST a)
{
    int k = 0;
    NODE p = a.Head;
    while (p != NULL)
    {
        k++;
        p = p->next;
    }
    return k;
}
void xoadau(LIST& a)
{
    if (a.Head == NULL)
    {
        cout << "\n Danh sach rong!";
        return;
    }
    if (dem(a) == 1)
    {
        a.Head = a.Tail = NULL;
        return;
    }
    NODE p = a.Head;
    a.Head = a.Head->next;
    free(p);
}
void xoacuoi(LIST& a)
{
    if (a.Head == NULL)
    {
        cout << "\n Danh sach rong!";
        return;
    }
    if (dem(a) == 1)
    {
        a.Head = a.Tail = NULL;
        return;
    }
    NODE p = a.Head, q;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    q = p->next;
    a.Tail = p;
    a.Tail->next = NULL;
    free(q);
}
int main()
{
    LIST a;
    khoitao(a);
    int n;
    cout << " Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        themcuoi(a, i);
    }
    duyet(a);
    xoadau(a);
    duyet(a);
    xoacuoi(a);
    duyet(a);
}