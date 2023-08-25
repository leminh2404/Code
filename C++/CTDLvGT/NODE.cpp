#include "iostream"
using namespace std;
typedef struct NODE
{
    int info;
    struct node *next; 
} node;
typedef node *head;
typedef node *tail;
node *tao1ptu(int x) // Tao phan tu dau tien cua danh sach
{
    node *p;
    p = (node *)malloc(sizeof(node));
    if (p == NULL)
    {
        printf(" Ko du bo nho!");
        exit(1);
    }
    p->info = x;
    p->next = NULL;
    return p;
}
void chenvaodau(LIST &head, LIST &tail, node *new)
{
    if (head = NULL)
    {
        head = new;
        tail = head;
    }
    else
    {
        new->next = head;
        head = new;
    }
}
void chengiua(LIST &head, LIST &tail, node *q, node *new)
{
    if (q != NULL)
    {
        new->next = q->next;
        q->next = new;
        if (q == tail)
        {
            tail = new;
        }
    }
}
node *tim(LIST head, int x)
{
    node *p;
    p = head;
    while (p->info != x && p != NULL)
        p = p->next;
    return p;
}
void xoa(LIST &head, LIST &tail, node *q)
{
    node *p;
    if (q != NULL)
        p = q->next;
    if (p != NULL)
    {
        if (p == tail)
        {
            tail = q;
        }
        q->next = p->next;
        free(p);
    }
}
void sapxep(LIST &head)
{
    node *min, *p, *q;
    p = head;
    while (p != NULL)
    {
        if (q->info < min->info)
            min = q;
        q = q->next;
    }
}
int main()
{
}