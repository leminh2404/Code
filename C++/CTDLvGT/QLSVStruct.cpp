#include <iostream>
#include <cstring>
#include <cstdlib>
#define for for (int i = 0; i < n; i++)
using namespace std;
struct sinhvien
{
	int masv;
	string hoten;
	int tongdiem;
};
typedef struct sinhvien SV;
struct node
{
	SV data;
	node *next;
};
typedef struct node NODE;
struct list
{
	NODE *head;
	NODE *tail;
};
typedef struct list LIST;
void khoitao(LIST &l)
{
	l.head = NULL;
	l.tail = NULL;
}
NODE *taonode(SV x)
{
	NODE *p = new NODE;
	if (p == NULL)
	{
		printf("\n k cap phat dc bo nho ");
	}
	p->data = x;
	p->next = NULL;
	return p;
}
void themcuoi(LIST &l, SV &x)
{
	NODE *tmp = taonode(x);
	if (l.head == NULL)
	{
		l.head = l.tail = tmp;
	}
	else
	{
		NODE *p = l.head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = tmp;
		l.tail = tmp;
	}
}
void nhap(LIST &l, SV &x)
{
	cout << "nhap ma sinh vien " << endl;
	cin >> x.masv;
	cout << "nhap ho ten " << endl;
	cin.ignore();
	getline(cin, x.hoten);
	cout << "nhap tong diem " << endl;
	cin >> x.tongdiem;
	themcuoi(l, x);
}
void duyet(LIST l)
{
	NODE *p = l.head;
	while (p != NULL)
	{
		printf("\n ma sinh vien la %d", p->data.masv);
		cout << "\n Ho ten sv: " << p->data.hoten;
		printf("\n tong diem %d", p->data.tongdiem);
		cout << "\n";
		p = p->next;
	}
}
int main()
{
	LIST l;
	int n;
	cout << " Nhap n: ";
	cin >> n;
	SV *a = new SV;
	for
	{
		nhap(l, a[i]);
	}
	printf("\n Thong tin sinh vien ");
	duyet(l);
}
