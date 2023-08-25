#include "iostream"
using namespace std;
typedef struct
{
    int info;
    struct node *next;
} node;
node tao1ptu(int x)
{
    node *tmp = new node;
    tmp->next = NULL;
    tmp->data = x;
    return tmp;
}
node them1ptu(node p, int x)
{
    node tmp = tao1ptu(x);
    p->next = tmp;
    return tmp;
}
void inds(node *l)
{
    node *p = l;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main()
{
    int n, x;
    cin >> n >> x;
    node *l = tao1ptu(x);
    node *p = l;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        p = them1ptu(p, x);
    }
    inds(l);
}