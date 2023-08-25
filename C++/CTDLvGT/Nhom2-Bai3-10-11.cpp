#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
typedef struct Vandongvien
{
	int ma;
	string ten;
	int tuoi;
	string qq;
	float luong;
} VDV;
struct node
{
	VDV data;
	node *next;
	node *pre;
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
void nhap(VDV &a)
{
	cout << " Nhap ma: ";
	cin >> a.ma;
	cout << " Nhap ten: ";
	cin.ignore();
	getline(cin, a.ten);
	cout << " Nhap tuoi: ";
	cin >> a.tuoi;
	cout << " Nhap que quan: ";
	cin.ignore();
	getline(cin, a.qq);
	cout << " Nhap luong: ";
	cin >> a.luong;
}
NODE createnode(VDV a)
{
	NODE tmp = new struct node;
	tmp->data = a;
	tmp->next = NULL;
	tmp->pre = NULL;
	return tmp;
}
void ifnull(LIST &a, NODE b)
{
	a.Head = b;
	a.Tail = a.Head;
}
void addlast(LIST &a, VDV b)
{
	NODE tmp = createnode(b);
	if (a.Head == NULL)
	{
		ifnull(a, tmp);
		return;
	}
	a.Tail->next = tmp;
	tmp->pre = a.Tail;
	a.Tail = tmp;
}
void de(LIST &a, NODE b)
{
	b->pre->next = b->next;
}
void del(LIST &a, int pos)
{
	int k = 0;
	NODE p = a.Head;
	while (p != NULL)
	{
		k++;
		p = p->next;
	}
	if (pos >= k)
	{
		cout << "Thuc hien xoa phan tu cuoi dslk";
		p = a.Tail;
		a.Tail = p->pre;
		a.Tail->next = NULL;
		free(p);
	}
	else if (pos <= 1)
	{
		cout << "\nThuc hien xoa phan tu dau dslk";
		p = a.Head;
		a.Head = p->next;
		a.Head->pre = NULL;
		free(p);
	}
	else
	{
		p = a.Head;
		k = 0;
		while (k != pos - 1)
		{
			p = p->next;
			k++;
		}
		p->pre->next = p->next;
		p->next->pre = p->pre;
		free(p);
	}
}
void traverse(LIST a)
{
	NODE p = a.Head;
	while (p != NULL)
	{
		cout << "\n Ma van dong vien: " << p->data.ma << ", ten vdv: " << p->data.ten << ", tuoi: " << p->data.tuoi << ", que quan: " << p->data.qq << ", luong: " << p->data.luong;
		p = p->next;
	}
}
void find(LIST a)
{
	int dem = 0;
	NODE p = a.Head;
	while (p != NULL)
		if (p->data.qq == "Nghe An")
			dem++;
	if (dem == 0)
		cout << "\n Khong tim thay van dong vien que Nghe An";
	else
	{
		while (p != NULL)
		{
			if (p->data.qq == "Nghe An")
			{
				cout << "\n Thong tin van dong vien que Nghe An: ";
				cout << "\n Ma van dong vien: " << p->data.ma << ", ten vdv: " << p->data.ten << ", tuoi: " << p->data.tuoi << ", que quan: " << p->data.qq << ", luong: " << p->data.luong;
			}
			p = p->next;
		}
	}
}
void del50(LIST &a)
{
	int dem;
	NODE p = a.Head;
	while (p != NULL)
	{
		dem = 0;
		if (p->data.tuoi >= 50)
		{
			p->pre->next = p->next;
			dem++;
		}
		if (dem != 0)
			return;
		del50(a);
		p = p->next;
	}
}
void xoa(LIST &a)
{
	NODE p;
	for (p = a.Head; p != NULL; p = p->next)
	{
		if (p->data.tuoi >= 50)
		{
			if (p == a.Head)
			{
				a.Head = a.Head->next;
				if (a.Head != NULL)
					a.Head->pre = NULL;
				else
					a.Head = NULL;
				delete p;
			}
			else
			{
				if (p == a.Tail)
				{
					a.Tail = a.Tail->pre;
					if (a.Tail == NULL)
						a.Tail->next = NULL;
					else
						a.Tail = NULL;
					delete p;
				}
				else
				{
					p->pre->next = p->next;
					p->next->pre = p->pre;
					delete p;
				}
			}
		}
	}
}
int main()
{
	LIST a;
	first(a);
	int n;
	cout << " Nhap n: ";
	cin >> n;
	VDV *b = new VDV[n];
	for (int i = 0; i < n; i++)
	{
		nhap(b[i]);
		addlast(a, b[i]);
	}
	traverse(a);
	cout << "\n Danh sach sau khi xoa 50: ";
	del50(a);
	traverse(a);
}