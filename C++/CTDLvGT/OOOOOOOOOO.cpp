#include "iostream"
#include "cstring"
using namespace std;
struct vandongvien
{

	int mav;
	string ten;
	int tuoi;
	string que;
	float luong;
};
typedef struct vandongvien VD;
struct node
{
	VD data;
	node *next;
	node *pre;
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
NODE *taonode(VD &x)
{
	NODE *p = new NODE;
	if (p == NULL)
	{
		cout << "\n khong cap phat ";
	}
	else
	{
		p->data = x;
		p->next = NULL;
		p->pre = NULL;
	}
}
void themcuoi(LIST &l, NODE *p)
{
	if (l.head == NULL)
	{
		l.head = l.tail = p;
	}
	else
	{
		l.tail->next = p;
		p->pre = l.tail;
		l.tail = p;
	}
}

void nhap(VD &x)
{
	cout << "\n nhap ma VDV ::";
	cin >> x.mav;
	cout << "\n nhap ten VDV ";
	fflush(stdin);
	getline(cin, x.ten);
	cout << "\n nhap tuoi::";
	cin >> x.tuoi;
	cout << "\n nhap que VDV ";
	fflush(stdin);
	getline(cin, x.que);
	cout << "\n nhap luong::";
	cin >> x.luong;
}
void xuat1(VD x)
{
	cout << "\n ma VDV la :::" << x.mav;
	cout << "\n ten VDV la :::" << x.ten;
	cout << "\n tuoi VDV la :::" << x.tuoi;
	cout << "\n que VDV la :::" << x.que;
	cout << "\n luong VDV la :::" << x.luong;
}
void xuat2(LIST l)
{
	for (NODE *k = l.head; k != 0; k = k->next)
	{
		xuat1(k->data);
	}
}
/*
void lietke(LIST l)
{
	NODE *p = l.head;
	if(p == NULL)
	{
		cout << "Loi roi :))" << endl;
	}
	else
	{
		int count = 0;
		cout << "Nhung van dong vien que o Nghe An la: "<<endl;
		while(p != NULL)
		{
			if(p->data.que == "Nghe An")
			{
				count++;
				xuat1(p->data);
			}
			p = p->next;
		}
		if(count == 0)
			cout << "Khong co van dong vien nao que Nghe An" << endl;

	}
}
*/

void lietke(LIST &l)
{
	NODE *p = l.head;
	if (p == NULL)
	{
		cout << "\nloi roi ";
	}
	else
	{
		int count = 0;
		cout << "\nNhung van dong vien que o Nghe An la: " << endl;
		while (p != NULL)
		{
			if (p->data.que == "Nghe An")
				;
			{
				count++;
				xuat1(p->data);
				cout << "||||||||||||||||||||||||||||||";
			}
			p = p->next;
		}
		if (count == 0)
		{
			cout << "\n khong co que";
		}
	}
}
int main()
{
	LIST l;
	khoitao(l);
	int n;
	VD x;
	cout << "\n nhap so luong VDV :::";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		nhap(x);
		NODE *p = taonode(x);
		themcuoi(l, p);
	}
	xuat2(l);
	cout << "\n thong tin ->>>>>>";
	lietke(l);
}