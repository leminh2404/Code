#include "iostream"
#include "cstdlib"
using namespace std;
struct node
{
    int info;
    node *next;
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
NODE createnode(int x)
{
    NODE tmp = new struct node;
    tmp->info = x;
    tmp->next = NULL;
    return tmp;
}
void addlast(LIST &a, int x)
{
    NODE tmp = createnode(x);
    if (a.Head == NULL)
    {
        a.Head = a.Tail = tmp;
        a.Head->next = a.Tail->next = NULL;
        return;
    }
    a.Tail->next = tmp;
    a.Tail = tmp;
    a.Tail->next = NULL;
}
void traverse(LIST a)
{
    NODE p = a.Head;
    while (p != NULL)
    {
        cout << " " << p->info;
        p = p->next;
    }
}
int cnt(LIST a)
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
void del(LIST &a, int pos)
{
    if (cnt(a) == 0)
    {
        cout << "Dslk rong! Khong co gi de xoa";
        return;
    }
    int k = cnt(a);
    if (pos <= 1)
    {
        NODE p = a.Head;
        a.Head = a.Head->next;
        delete p;
    }
    else if (pos >= k)
    {
        NODE p = a.Head, q;
        while (p->next->next != NULL)
            p = p->next;
        q = p->next;
        a.Tail = p;
        a.Tail->next = NULL;
        delete q;
    }
    else
    {
        NODE q, p = a.Head;
        k = 1;
        while (k < pos - 1)
        {
            k++;
            p = p->next;
        }
        q = p->next;
        p->next = p->next->next;
        delete q;
    }
}
int main()
{
    LIST a;
    first(a);
    int n, c;
    cout << " Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << " Nhap node thu " << i + 1 << ": ";
        cin >> c;
        addlast(a, c);
    }
    traverse(a);
    int pos;
    cout << "\n Nhap vi tri can xoa: ";
    cin >> pos;
    del(a, pos);
    traverse(a);
}