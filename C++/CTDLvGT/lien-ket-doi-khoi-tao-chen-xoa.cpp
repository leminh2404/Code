#include <iostream>
#include <string>
using namespace std;
struct HocVien {
	int mahocvien;
	string tenhocvien;
	string lop;
	string chuyennganh;
	float diemtongket;
};
typedef HocVien TypeOfData;
TypeOfData InputTypeOfData() {
	TypeOfData hocvien;
	cout << "Nhap ma hoc vien: ";
	cin >> hocvien.mahocvien;
	cout << "Nhap ten hoc vien: ";
	fflush(stdin);
	getline(cin, hocvien.tenhocvien);
	cout << "Nhap lop: ";
	fflush(stdin);
	getline(cin, hocvien.lop);
	cout << "Nhap chuyen nganh: ";
	fflush(stdin);
	getline(cin, hocvien.chuyennganh);
	cout << "Nhap diem tong ket: ";
	cin >> hocvien.diemtongket;
	return hocvien;
}
struct TypeOfNode {
	TypeOfData data;
	struct TypeOfNode *next;
	struct TypeOfNode *prev;
};
typedef struct TypeOfNode *NodePtr;
// in thong tin mot nut
void PrintNodeInfo(NodePtr pnode) {
	cout << " - Ma hoc vien: " << pnode->data.mahocvien << endl;
	cout << " - Ten hoc vien: " << pnode->data.tenhocvien << endl;
	cout << " - Lop: " << pnode->data.lop << endl;
	cout << " - Chuyen nganh: " << pnode->data.chuyennganh << endl;
	cout << " - Diem tong ket: " << pnode->data.diemtongket << endl;
}
// khoi tao
void initialize(NodePtr &L, NodePtr &R) {
	L = NULL;
	R = NULL;
}
// kiemtra rong
int isEmpty(NodePtr L, NodePtr R) {
	return ((L == NULL || R == NULL) ? true : false);
}
// tao mot nut
NodePtr CreateNode(TypeOfData data) {
	NodePtr newNode = new TypeOfNode;
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}
// them mot phan tu vao dau danh sach
void InsertHead(TypeOfData data, NodePtr &L, NodePtr &R) {
	NodePtr newNode = CreateNode(data);
	if (L == NULL && R == NULL) {
		L = newNode;
		R = newNode;
	} else {
		L->next = newNode;
		newNode->prev = L;
		L = newNode;
	}
}
// them mot phan tu vao cuoi danh sach
void InsertTail(TypeOfData data, NodePtr &L, NodePtr &R) {
	NodePtr newNode = CreateNode(data);
	if (L == NULL && R == NULL) {
		L = newNode;
		R = L;
	} else {
		newNode->next = R;
		R->prev = newNode;
		R = newNode;
	}
}
// duyet danh sach
void traverse(NodePtr L, NodePtr R) {
	if (L == NULL || R == NULL) {
		cout << "Danh sach rong" << endl;
	} else {
		int i = 0;
		for (NodePtr p = L; p != NULL; p = p->prev) {
			cout << "Thong tin hoc vien " << ++i << ":" << endl;
			PrintNodeInfo(p);
		}
	}
}
// xoa nut p ra khoi danh sach L
void deleteList(NodePtr p, NodePtr &L, NodePtr &R) {
	if (p == NULL) {
		cout << "Nut can xoa khong ton tai" << endl;
	} else {
		if (L == NULL) {
			cout << "Danh sach rong" << endl;
		} else {
			if (L == R && p == L) {
				L = NULL;
				R = NULL;
			} else {
				if (p == L) {
					L = L->prev;
					L->next = NULL;
					delete p;
				} else {
					if (p == R) {
						R = R->next;
						R->prev = NULL;
						delete p;
					} else {
						p->prev->next = p->next;
						p->next->prev = p->prev;
						p->prev = NULL;
						p->next = NULL;
						delete p;
					}
				}
			}
		}
	}
}
int main() {
	int n;
	cout << "So hoc vien can nhap: ";
	cin >> n;
	NodePtr L, R;
	initialize(L, R);
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin hoc vien " << i + 1 << ":" << endl;
		TypeOfData hocvien = InputTypeOfData();
		InsertTail(hocvien, L, R);
	}
	cout << "  DANH SACH HOC VIEN VUA NHAP:" << endl;
	traverse(L, R);
	cout << "==================================================" << endl;
	cout << "			XOA PHAN TU CUOI" << endl;
	deleteList(R, L, R);
	cout << "DANH SACH SAU KHI XOA: " << endl;
	traverse(L, R);
}
