#include "iostream"
#include "cstdlib"
using namespace std;
struct node
{
    int data;
    struct node *next;
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
bool empty(LIST a)
{
    if (a.Head == NULL)
        return true;
    return false;
}
NODE createnode(int x)
{
    NODE tmp = new struct node;
    if (tmp == NULL)
    {
        cout << "\n Khong du bo nho!";
        exit(1);
    }
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
int demnode(LIST a)
{
    int dem = 1;
    NODE p = a.Head;
    while (p->next != NULL)
    {
        dem++;
        p = p->next;
    }
    return dem;
}
void addfirst(LIST &a, int x)
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
void addlast(LIST &a, int x)
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
    a.Tail->next = NULL;
}
void addmid(LIST &a, int x, int pos)
{
    int k = demnode(a);
    if (pos > k)
    {
        addlast(a, x);
        return;
    }
    if (pos <= 1)
    {
        addfirst(a, x);
        return;
    }
    NODE tmp = createnode(x);
    NODE p = a.Head;
    k = 1;
    while (p->next != NULL && k != pos - 1)
    {
        k++;
        p = p->next;
    }
    tmp->next = p->next;
    p->next = tmp;
}
bool findx(LIST a, int x)
{
    NODE p = a.Head;
    while (p != NULL)
    {
        if (p->data == x)
            break;
        p = p->next;
    }
    if (p == NULL)
        return false;
    else
        return true;
}
void delfirst(LIST &a)
{
    NODE p = a.Head;
    if (empty(a))
    {
        cout << "\n Khong co gi de xoa!";
        return;
    }
    if (a.Head == a.Tail)
    {
        a.Head = a.Tail = NULL;
        free(p);
        cout << "\n Da xoa!";
        return;
    }
    a.Head = a.Head->next;
    free(p);
    cout << "\n Da xoa node dau!";
}
void dellast(LIST &a)
{
    NODE p = a.Head;
    if (empty(a))
    {
        cout << "\n Khong co gi de xoa!";
        return;
    }
    if (a.Head == a.Tail)
    {
        a.Head = a.Tail = NULL;
        free(p);
        cout << "\n Da xoa!";
        return;
    }
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    NODE q = a.Tail;
    a.Tail = p;
    a.Tail->next = NULL;
    free(q);
    cout << "\n Da xoa node cuoi!";
}
void finddel(LIST &a, int x)
{
    if (empty(a))
    {
        cout << "\n Danh sach rong!";
        return;
    }
    if (!findx(a, x))
    {
        cout << "\n x vua nhap ko tim thay de xoa!";
        return;
    }
    NODE p = a.Head;
    if (a.Head->data == x)
    {
        delfirst(a);
        return;
    }
    if (a.Tail->data == x)
    {
        dellast(a);
        return;
    }
    while (p->next != NULL)
    {
        if (p->next->data == x)
        {
            NODE q = p->next;
            p->next = q->next;
            free(q);
        }
        p = p->next;
    }
}
void traverse(LIST a)
{
    if (empty(a))
    {
        cout << "\n Danh sach rong!";
        return;
    }
    NODE p = a.Head;
    cout << '\n';
    while (p != NULL)
    {
        cout << " " << p->data;
        p = p->next;
    }
}
void traverserever(LIST a)
{
    NODE p;
    int k = demnode(a), t;
    while (true)
    {
        p = a.Head;
        t = 1;
        while (t != k)
        {
            p = p->next;
            t++;
        }
        k--;
        cout << " " << p->data;
        if (k == 0)
            break;
    }
}
void dellist(LIST &a)
{
    NODE p;
    while (!empty(a))
    {
        p = a.Head;
        a.Head = a.Head->next;
        free(p);
    }
    first(a);
}
void MENU()
{
    cout << "\n                ==============================MENU===============================";
    cout << "\n                || 1. Nhap va xuat n phan tu bang cach them vao dau danh sach  ||";
    cout << "\n                || 2. Nhap va xuat n phan tu bang cach them vao cuoi danh sach ||";
    cout << "\n                || 3. In danh sach theo chieu cuoi                             ||";
    cout << "\n                || 4. Dem so node cua danh sach                                ||";
    cout << "\n                || 5. Tim x trong danh sach                                    ||";
    cout << "\n                || 6. Xoa node dau danh sach                                   ||";
    cout << "\n                || 7. Xoa node cuoi danh sach                                  ||";
    cout << "\n                || 8. Xoa node voi gia tri x                                   ||";
    cout << "\n                || 9. Chen 1 node voi gia tri x                                ||";
    cout << "\n                || 10. Duyet danh sach                                         ||";
    cout << "\n                || 11. In Head                                                 ||";
    cout << "\n                || 12. In Tail                                                 ||";
    cout << "\n                || 0. Thoat                                                    ||";
    cout << "\n                =================================================================";
}
int main()
{
    LIST a;
    first(a);
    int n, s, b, x, pos;
    MENU();
    while (true)
    {
        cout << "\n Nhap lua chon: ";
        cin >> s;
        if (s == 0)
            break;
        switch (s)
        {
        case 1:
            system("cls");
            if (!empty(a))
                dellist(a);
            cout << "\n Nhap n: ";
            cin >> n;
            int b;
            for (int i = 0; i < n; i++)
            {
                cout << " Nhap gia tri node " << i + 1 << ": ";
                cin >> b;
                addfirst(a, b);
            }
            MENU();
            break;
        case 2:
            system("cls");
            if (!empty(a))
                dellist(a);
            cout << "\n Nhap n: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << " Nhap gia tri node " << i + 1 << ": ";
                cin >> b;
                addlast(a, b);
            }
            MENU();
            break;
        case 3:
            system("cls");
            cout << '\n';
            traverserever(a);
            MENU();
            break;
        case 4:
            system("cls");
            cout << "\n So node cua danh sach: " << demnode(a);
            MENU();
            break;
        case 5:
            system("cls");
            cout << "\n Nhap x: ";
            cin >> x;
            if (findx(a, x))
                cout << "\n x co trong danh sach!";
            else
                cout << "\n Khong tim thay x!";
            MENU();
            break;
        case 6:
            system("cls");
            delfirst(a);
            MENU();
            break;
        case 7:
            system("cls");
            dellast(a);
            MENU();
            break;
        case 8:
            system("cls");
            cout << "\n Nhap gia tri can xoa: ";
            cin >> x;
            finddel(a, x);
            MENU();
            break;
        case 9:
            system("cls");
            cout << "\n Nhap vi tri muon chen: ";
            cin >> pos;
            cout << " Nhap gia tri muon chen: ";
            cin >> x;
            addmid(a, x, pos);
            MENU();
            break;
        case 10:
            system("cls");
            traverse(a);
            MENU();
            break;
        case 11:
            system("cls");
            if (empty(a))
                cout << "\n Danh sach rong!";
            else
                cout << "\n " << a.Head->data;
            MENU();
            break;
        case 12:
            system("cls");
            if (empty(a))
                cout << "\n Danh sach rong!";
            else
                cout << "\n " << a.Tail->data;
            MENU();
        default:
            break;
        }
    }
}