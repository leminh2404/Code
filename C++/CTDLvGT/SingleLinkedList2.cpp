#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
typedef struct SinhVien
{
    string hoten;
    string masv;
    int ns;
    float dtb;
} SV;
struct node
{
    SV data;
    struct node *next;
};
typedef struct node *NODE;
typedef struct list
{
    NODE Head;
    NODE Tail;
} LIST;
void input(SV &a)
{
    cout << "\n Nhap ho va ten: ";
    cin.ignore();
    getline(cin, a.hoten);
    cout << " Nhap ma sinh vien: ";
    getline(cin, a.masv);
    cout << " Nhap nam sinh: ";
    cin >> a.ns;
    cout << " Nhap diem trung binh: ";
    cin >> a.dtb;
}
NODE createnode(SV a)
{
    NODE tmp = new struct node;
    if (tmp == NULL)
    {
        cout << "\n Khong du bo nho!";
        exit(1);
    }
    tmp->data = a;
    tmp->next = NULL;
    return tmp;
}
void first(LIST &a)
{
    a.Head = NULL;
    a.Tail = NULL;
}
bool empty(LIST a)
{
    if (a.Head == NULL)
        return true;
    return false;
}
void addfirst(LIST &a, SV x)
{
    NODE tmp = createnode(x);
    if (a.Head == NULL)
    {
        a.Head = tmp;
        a.Tail = a.Head;
        return;
    }
    tmp->next = a.Head;
    a.Head = tmp;
}
void addlast(LIST &a, SV x)
{
    NODE tmp = createnode(x);
    if (a.Head == NULL)
    {
        a.Head = tmp;
        a.Tail = a.Head;
        return;
    }
    a.Tail->next = tmp;
    a.Tail = tmp;
}
void finddtb5(LIST a)
{
    int dem = 0;
    NODE p = a.Head;
    while (p != NULL)
    {
        if (p->data.dtb < 5)
            dem++;
        p = p->next;
    }
    if (dem == 0)
        cout << "\n Khong co sinh vien nao co dtb < 5";
    else
    {
        cout << "\n Danh sach sinh vien co dtb < 5:";
        p = a.Head;
        while (p != NULL)
        {
            if (p->data.dtb < 5)
                cout << "\n Ho va ten: " << p->data.hoten << ", ma sinh vien: " << p->data.masv << ", nam sinh: " << p->data.ns << ", diem trung binh: " << p->data.dtb;
            p = p->next;
        }
    }
}
int find2000(LIST a)
{
    int dem = 0;
    NODE p = a.Head;
    while (p != NULL)
    {
        if (p->data.ns < 2000)
            dem++;
        p = p->next;
    }
    return dem;
}
int dem(LIST a)
{
    NODE p = a.Head;
    int k = 0;
    while (p != NULL)
    {
        k++;
        p = p->next;
    }
    return k;
}
void del2000(LIST &a)
{
    NODE p, q;
    if (dem(a) != 0)
    {
        while (find2000(a) != 0)
        {
            p = a.Head, q = a.Tail;
            if (a.Head->data.ns < 2000)
            {
                if (a.Head->data.ns == a.Tail->data.ns && dem(a) == 1)
                {
                    a.Head = a.Tail = NULL;
                    return;
                }
                if (a.Head->data.ns < 2000)
                {
                    a.Head = a.Head->next;
                    free(p);
                    continue;
                }
            }
            if (a.Tail->data.ns < 2000)
            {
                while (p->next->next != NULL)
                    p = p->next;
                q = a.Tail;
                a.Tail = p;
                a.Tail->next = NULL;
                free(q);
                continue;
            }
            while (p->next->next != NULL)
            {
                if (p->next->data.ns < 2000)
                {
                    q = p->next;
                    p->next = q->next;
                    free(q);
                    continue;
                }
                p = p->next;
            }
        }
        cout << "\n Da xoa cac sinh vien nam sinh truoc 2000!";
    }
    else
        cout << "\n Khong co sinh vien nam sinh truoc 2000!";
}
void sxtang(LIST &a)
{
    NODE p, q;
    for (p = a.Head; p->next != NULL; p = p->next)
        for (q = p->next; q != NULL; q = q->next)
            if (p->data.dtb > q->data.dtb)
                swap(p->data, q->data);
}
void traverse(LIST a)
{
    NODE p = a.Head;
    while (p != NULL)
    {
        cout << "\n Ho va ten: " << p->data.hoten << ", ma sinh vien: " << p->data.masv << ", nam sinh: " << p->data.ns << ", diem trung binh: " << p->data.dtb;
        p = p->next;
    }
}
void traverseanddel(LIST &a)
{
    NODE p;
    while (a.Head != NULL)
    {
        p = a.Head;
        cout << "\n Ho va ten: " << a.Head->data.hoten << ", ma sinh vien: " << a.Head->data.masv << ", nam sinh: " << a.Head->data.ns << ", diem trung binh: " << a.Head->data.dtb;
        a.Head = a.Head->next;
        free(p);
    }
}
void MENU()
{
    cout << "\n               ================================MENU=================================";
    cout << "\n               || 1. Nhap danh sach N sinh vien bang thao tac them vao dau DSLK   ||";
    cout << "\n               || 2. Nhap danh sach N sinh vien bang thao tac them vao cuoi DSLK  ||";
    cout << "\n               || 3. In danh sach sinh vien co dtb < 5                            ||";
    cout << "\n               || 4. Xoa cac sinh vien sinh truoc nam 2000                        ||";
    cout << "\n               || 5. Sap xep sinh vien tang dan theo dtb                          ||";
    cout << "\n               || 6. In danh sach                                                 ||";
    cout << "\n               || 7. In danh sach va xoa danh sach                                ||";
    cout << "\n               || 8. Thoat                                                        ||";
    cout << "\n               =====================================================================";
}
int main()
{
    LIST a;
    first(a);
    int s, n;
    SV *b;
    MENU();
    while (true)
    {
        cout << "\n Nhap lua chon: ";
        cin >> s;
        switch (s)
        {
        case 1:
            system("cls");
            MENU();
            cout << "\n Nhap n: ";
            cin >> n;
            b = new SV[n];
            for (int i = 0; i < n; i++)
            {
                input(b[i]);
                addfirst(a, b[i]);
            }
            break;
        case 2:
            system("cls");
            MENU();
            cout << "\n Nhap n: ";
            cin >> n;
            b = new SV[n];
            for (int i = 0; i < n; i++)
            {
                input(b[i]);
                addlast(a, b[i]);
            }
            break;
        case 3:
            system("cls");
            MENU();
            finddtb5(a);
            break;
        case 4:
            system("cls");
            MENU();
            del2000(a);
            break;
        case 5:
            system("cls");
            MENU();
            sxtang(a);
            break;
        case 6:
            system("cls");
            MENU();
            if (empty(a))
                cout << "\n Danh sach rong!";
            else
                traverse(a);
            break;
        case 7:
            system("cls");
            MENU();
            if (empty(a))
                cout << "\n Danh sach rong!";
            traverseanddel(a);
            break;
        default:
            break;
        }
        if (s == 8)
            break;
    }
}