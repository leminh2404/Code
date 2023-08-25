#include "iostream"
#include "stdlib.h"
#include "conio.h"
using namespace std;
struct node {
	int data;
	node *next;
};
typedef struct node NODE;
NODE *taonode(int x) {
	NODE *tmp = new NODE;
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}
NODE *them1ptudaudslk(NODE *&Head, int x) {
	NODE *tmp = taonode(x);
	if (Head == NULL) {
		Head = tmp;
		return Head;
	} else {
		NODE *p = Head;
		tmp->next = Head;
		Head = tmp;
		return Head;
	}
}
NODE *them1ptucuoidslk(NODE *&Head, int x) {
	NODE *tmp = taonode(x);
	if (Head == NULL) {
		Head = tmp;
		return Head;
	} else {
		NODE *p = Head;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
		return Head;
	}
}
NODE *them1ptugiuadslk(NODE *&Head, int x, int pos) {
	NODE *tmp = taonode(x);
	if (pos == 0 || Head == NULL)
		them1ptudaudslk(Head, x);
	int k = 1;
	NODE *p = Head;
	while (p->next != NULL && k < pos) {
		k++;
		p = p->next;
	}
	if (k < pos) {
		cout << " Vi tri chen ko hop le -> chen vao cuoi";
		them1ptucuoidslk(Head, x);
	} else {
		tmp->next = p->next->next;
		p->next = tmp;
	}
	return Head;
}
NODE *duyet(NODE *Head) {
	NODE *p = Head;
	while (p != NULL) {
		cout << " " << p->data;
		p = p->next;
	}
	return Head;
}
NODE *sxtang(NODE *&Head) {
	NODE *p, *q;
	int t;
	for(p=Head; p->next!=NULL; p=p->next) {
		for(q=p->next; q!=NULL; q=q->next) {
			if(p->data>q->data) {
				t=p->data;
				p->data=q->data;
				q->data=t;
			}
		}
	}
	NODE *tmp = Head;
	while(tmp!=NULL) {
		cout << " " << tmp->data;
		tmp=tmp->next;
	}
	return Head;
}
void timkiem(NODE *Head, int x) {
	NODE *p = Head;
	int dem=0;
	while(p!=NULL) {
		if(p->data == x) {
			dem++;
			break;
		}
		p=p->next;
	}
	if(dem==0) {
		cout << " Khong tim thay gia tri!";
	} else {
		dem = 0;
		p = Head;
		while(p!=NULL) {
			if(p->data == x) {
				cout << " "<<x<<" co trong DSLK va nam o vi tri "<<dem<<"";
				break;
			}
			dem++;
			p=p->next;
		}
	}
}
int main() {
	NODE *Head = NULL;
	int n;
	cout << " Nhap so phan tu DSLK: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cout << " Nhap phan tu thu " << i << ": ";
		cin >> a;
		them1ptucuoidslk(Head, a);
	}
	cout << " DSLK vua nhap: \n";
	duyet(Head);
	cout << " Them 1 phan tu vao dau dslk: \n";
	int x, y;
	cout << " Nhap gia tri can chen: ";
	cin >> x;
	them1ptudaudslk(Head, x);
	duyet(Head);
	cout << "\n DLSK sap xep tang dan:";
	sxtang(Head);
	int a;
A:
	cout << "\n Nhap gia tri can tim trong DSLK: ";
	cin >> a;
	system("cls");
	timkiem(Head,a);
	goto A;
}
