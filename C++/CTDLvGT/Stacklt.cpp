#include "iostream"
#include "cstdlib"
using namespace std;
struct stack
{
	int data;
	stack *next;
};
typedef struct stack STACK;
struct list
{
	STACK *Head;
};
typedef struct list LIST;
STACK *taonode(int x)
{
	STACK *tmp = new STACK;
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}
STACK *push(STACK *&Head, int x)
{
	STACK *tmp = taonode(x);
	if (Head == NULL)
	{
		Head = tmp;
		return Head;
	}
	else
	{
		tmp->next = Head;
		Head = tmp;
		return Head;
	}
	STACK *pop(STACK * &Head, int &x)
	{
		STACK *p = Head;
		x = p->data;
		Head = Head->next;
		delete p;
		return Head;
	}
	STACK *top(STACK * Head)
	{
		STACK *p = Head;
		cout << " " << p->data;
		return Head;
	}
	bool empty(STACK * &Head)
	{
		if (Head == NULL)
		{
			cout << "\n STACK tron!";
			return true;
		}
	}
}
void duyet(STACK *Head)
{
	STACK *p = Head;
	while (p != NULL)
	{
		cout << " " << p->data;
		p = p->next;
	}
}
int main()
{
	STACK *Head = NULL;
	int n;
	cout << " Nhap so ;: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cout << " Nhap phan tu thu " << i << " cua stack: ";
		cin >> a;
		push(Head, a);
	}
	cout << " STACK vua nhap:";
	duyet(Head);
	int x;
	pop(Head, x);
	cout << "\n Lay phan tu dau stack: " << x << "";
	cout << "\n STACK:";
	duyet(Head);
	cout << "\n STACK:";
	top(Head);
	while (!empty(Head))
	{
		pop(Head, x);
		cout << "\n Lay phan tu dau stack: " << x;
	}
	cout << " Stack: ";
	duyet(Head);
}