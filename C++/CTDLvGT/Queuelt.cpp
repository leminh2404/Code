#include "iostream"
#include "cstdlib"
using namespace std;
struct queue
{
    int data;
    queue *next;
    queue *pre;
};
typedef struct queue QUEUE;
typedef struct list
{
    QUEUE *Head;
    QUEUE *Tail;
} LIST;
bool IsEmpty(QUEUE *Head, QUEUE *&Tail)
{
    if (Head == NULL)
    {
        cout << "\n Queue dang trong rong!";
        Tail = NULL;
        return true;
    }
    else
        return false;
}
QUEUE *taonode(QUEUE *&Head, int x)
{
    QUEUE *tmp = new QUEUE;
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
QUEUE *enqueue(QUEUE *&Head, QUEUE *&Tail, int x)
{
    QUEUE *tmp = taonode(Head, x);
    if (Head == NULL)
    {
        Head = tmp;
        Tail = Head;
        return Head;
    }
    tmp->next = Tail;
    Tail->pre = tmp;
    Tail = tmp;
    Tail->pre = NULL;
    return Head;
}
QUEUE *duyet(QUEUE *Head)
{
    cout << "\n Duyet Queue tu dau:";
    QUEUE *q = Head;
    while (q != NULL)
    {
        cout << " " << q->data;
        q = q->pre;
    }
    return Head;
}
QUEUE *dequeue(QUEUE *&Head, QUEUE *&Tail)
{
    if (IsEmpty(Head, Tail) == true)
        return Head;
    else
    {
        QUEUE *p = Head;
        cout << "\n Lay phan tu o dau Queue: " << Head->data;
        Head = Head->pre;
        delete p;
        duyet(Head);
        return Head;
    }
}
void front(QUEUE *Head)
{
	cout << "\n Phan tu dau Queue: " << Head->data;
}
int main()
{
    QUEUE *Head = NULL, *Tail = NULL;
    int n;
    cout << " Nhap so phan tu cua Queue: ";
    cin >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cout << " Nhap phan tu thu " << i << ": ";
        cin >> a;
        enqueue(Head, Tail, a);
    }
    duyet(Head);
    front(Head);
    duyet(Head);
    /*while (!IsEmpty(Head, Tail))
    {
        dequeue(Head, Tail);
    }*/
    cout << "\n " << Head->next << " " << Tail->pre;
}