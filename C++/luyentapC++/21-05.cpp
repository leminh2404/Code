#include "stdio.h"
#include "string.h"
#include "stdlib.h"
typedef struct
{
	char manv[15];
	char hovaten[20];
	int ngay, thang, nam;
	float hesoluong;
} NhanVien;
void Nhap(NhanVien *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf(" Nhap ho va ten cua nhan vien thu %d: ", i + 1);
		fflush(stdin);
		gets(a[i].hovaten);
		printf(" Nhap ma nhan vien cua nhan vien thu %d: ", i + 1);
		fflush(stdin);
		gets(a[i].manv);
		printf(" Nhap lan luot ngay, thang, nam sinh cua nhan vien thu %d: ", i + 1);
		scanf("%d %d %d", &a[i].ngay, &a[i].thang, &a[i].nam);
		printf(" Nhap he so luong cua nhan vien thu %d: ", i + 1);
		scanf("%f", &a[i].hesoluong);
		printf("\n");
	}
}
void Xuat(NhanVien *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf(" Ho va ten cua nhan vien thu %d la %s, ma nhan vien cua nhan vien thu %d la %s, ngay sinh cua nhan vien thu %d la %d/%d/%d, he so luong cua nhan vien thu %d la %f ", i + 1, a[i].hovaten, i + 1, a[i].manv, i + 1, a[i].ngay, a[i].thang, a[i].nam, i + 1, a[i].hesoluong);
		printf("\n");
	}
}
void indsluong(NhanVien *a, int n)
{
	printf(" Danh sach nhan vien va luong cua ho la: \n");
	for (int i = 0; i < n; i++)
	{
		printf(" + %s,   %s,   luong thang nay la: %.3f", a[i].hovaten, a[i].manv, a[i].hesoluong * 1500);
		printf("\n");
	}
}
void nvm6699(NhanVien *a, int n)
{
	int kt = 0;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(a[i].manv, "nv6699") == 0)
			kt++;
	}
	if (kt != 0)
	{
		printf("\n Danh sach nhan vien co ma nv6699 la: \n");
		for (int i = 0; i < n; i++)
		{
			if (strcmp(a[i].manv, "nv6699") == 0)
			{
				printf(" + %s, %d/%d/%d", a[i].hovaten, a[i].ngay, a[i].thang, a[i].nam);
				printf("\n");
			}
		}
	}
	else
		printf("\n Khong co nhan vien nao co ma nv6699");
}
int main()
{
	NhanVien *a;
	int n;
	do
	{
		printf(" Nhap so nhan vien can nhap thong tin: ");
		scanf("%d", &n);
	} while (n <= 0);
	a = (NhanVien *)malloc(n * sizeof(NhanVien));
	Nhap(a, n);
	Xuat(a, n);
	indsluong(a, n);
	nvm6699(a, n);
	int kt = 0;
	FILE *ptr;
	ptr = fopen("C:\\C++\\filetangluong.txt", "w+");
	if (ptr == NULL)
	{
		printf(" Loi file!");
		exit(1);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i].hesoluong * 1500 < 5000)
			kt++;
	}
	if (kt != 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i].hesoluong * 1500 < 5000)
			{
				fprintf(ptr, "%s %s", a[i].hovaten, a[i].manv);
				char b[20], c[20];
				fscanf(ptr, " + %s, %s", &a[i].hovaten, &a[i].manv);
			}
		}
	}
}
