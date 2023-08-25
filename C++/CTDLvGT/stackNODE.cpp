#include "iostream"
#include "cstdlib"
using namespace std;
struct node
{
    int data;
    node *pre;
    node *next;
};
typedef struct node *NODE;
NODE createnode(int x)
{
    NODE tmp = new struct node;
    tmp->data = x;
    tmp->next = NULL;
    tmp->pre = NULL;
    return tmp;
}
NODE addfirst(NODE &Head, NODE &Tail, int x)
{
    NODE tmp = createnode(x);
    if (Head == NULL)
    {
        Head = tmp;
        Tail = Head;
        return Head;
    }
    Head->pre = tmp;
    tmp->next = Head;
    Head = tmp;
    return Head;
}
NODE addlast(NODE &Head, NODE &Tail, int x)
{
    NODE tmp = createnode(x);
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
NODE addmid(NODE &Head, NODE &Tail, int x, int pos)
{
    NODE tmp = createnode(x);
    if (pos == 1)
    {
        addfirst(Head, Tail, x);
        return Head;
    }
    int kt = 0;
    NODE p = Head;
    while (p != NULL)
    {
        kt++;
        p = p->next;
    }
    if (pos > kt)
    {
        cout << "\n Vi tri chen lon hon so ptu cua stack! Thuc hien chen cuoi.";
        addlast(Head, Tail, x);
        return Head;
    }
    else
    {
        p = Head;
        kt = 1;
        while (kt != pos)
        {
            p = p->next;
            kt++;
        }
        tmp->next = p;
        tmp->pre = p->pre;
        p->pre = tmp;
        return Head;
    }
}
void traverse(NODE Tail)
{
    NODE p = Tail;
    while (p != NULL)
    {
        cout << " " << p->data;
        p = p->pre;
    }
}
int main()
{
    NODE Head = NULL, Tail = NULL;
    int n;
    cout << " Nhap n: ";
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << " Nhap phan tu thu " << i + 1 << " cua STACK: ";
        cin >> a[i];
        addlast(Head, Tail, a[i]);
    }
    traverse(Tail);
    int pos;
    cout << "\n Nhap vi tri can chen: ";
    cin >> pos;
    int x;
    cout << " Nhap gia tri muon chen: ";
    cin >> x;
    addmid(Head, Tail, x, pos);
    traverse(Tail);
}