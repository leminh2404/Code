#include <conio.h>
#include <stdio.h>
#include <string.h>
typedef struct
{
    char sbd[10];
    char name[10];
    char que[10];
    int nam, ngay, thang;
    float diem;
} SV;
void input(SV a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n sinh vien thu %d", i);
        fflush(stdin);

        printf("\n sbd   : ");
        gets(a[i].sbd);
        fflush(stdin);

        printf("\n name  : ");
        gets(a[i].name);

        printf("\n que :");
        gets(a[i].que);
        fflush(stdin);

        printf("\n Nhap ngay sinh :");
        scanf("%d", &a[i].ngay);
        fflush(stdin);

        printf("\n Nhap thang sinh :");
        scanf("%d", &a[i].thang);
        fflush(stdin);

        printf("\n Nhap nam sinh :");
        scanf("%d", &a[i].nam);
        fflush(stdin);

        printf("\n Nhap diem:");
        scanf("%f", &a[i].diem);
    }
}
void output(SV a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n \n \n sinh vien thu : %d    ", i);
        printf("\n sbd :%s     ten :%s    que :%s  ngay:%d thang:%d nam:%d     diem :%3.3f", a[i].sbd, a[i].name, a[i].que, a[i].ngay, a[i].thang, a[i].nam, a[i].diem);
    }
}

void outputHN(SV a[], int n)
{
    for (int i = 0; i < n; i++)
        if (strcmp(a[i].que, "HANOI") == 0)
        {
            printf("\n \n \n \n Thong tin sinh vien que o Ha Noi :\n     ");
            printf("\n sbd :%s     ten :%s    que :%s  ngay:%d thang:%d nam:%d     diem :%3.3f", a[i].sbd, a[i].name, a[i].que, a[i].ngay, a[i].thang, a[i].nam, a[i].diem);
        }
}

void output2k2(SV a[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i].nam = 2002)
        {
            printf("\n \n \n \n Thong tin sinh vien sinh nam 2002 la  :\n     ");
            printf("\n sbd :%s     ten :%s    que :%s  ngay:%d thang:%d nam:%d     diem :%3.3f", a[i].sbd, a[i].name, a[i].que, a[i].ngay, a[i].thang, a[i].nam, a[i].diem);
        }
}
int main()
{
    SV a[20];
    int n;
    do
    {
        printf("\n nhap n :  ");
        scanf("%d", &n);
    } while (n < 0 || n > 20);
    input(a, n);
    output(a, n);
    outputHN(a, n);
    output2k2(a, n);
}
