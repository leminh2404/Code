#include "iostream"
#include "cstring"
#include "cstdlib"
using namespace std;
struct KhachHang
{
    int makh;
    string tenkh;
    int sodvsd;
    float tongtien;
    KhachHang *next;
};
typedef struct KhachHang KH;
KH* taonode(int x, string y, int z, float t)
{
    KH* tmp = new KH;
    tmp->makh=x;
    tmp->tenkh=y;
    tmp->sodvsd=z;
    tmp->tongtien=t;
    tmp->next=NULL;
    return tmp;
}
KH* themcuoi(KH *&Head,KH*&Tail, int x)
{
    if(Head==NULL)
    {
        Head=tmp;
        Tail=Head;
        return Head;
    }
    else
    {
        
    }
}