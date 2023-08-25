#include <iostream>
#include <stdio.h>
#include <math.h>

void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("  a[%d] =  %d", i, a[i]);
}

int timmax(int a[], int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}
int tinhtong(int a[], int n)
{
	int T = 0;
	for (int i = 0; i < n; i++)
		T += a[i];
	return T;
}

float timTBC(int a[], int n)
{
	int sum = 0, dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1)
		{
			sum += a[i];
			dem++;
		}
		if (dem == 0)
			return 0;
		else
			float tbc = (float)sum / dem;
	}
	void Sapxep(int a[], int n)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] < a[j])
				{
					int c = a[i];
					a[i] = a[j];
					a[j] = c;
				}
			}
		}
	}

	int main()
	{
		int a[100];
		int n;
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d", &n);
		nhap(a, n);
		printf("Cac gia tri vua nhap la:");
		xuat(a, n);

		int max = timmax(a, n);
		printf("\nGia tri lon nhat trong mang la: %d ", max);

		int T = tinhtong(a, n);
		printf("\nTong cac phan tu cua mang la: %d ", T);

		float tbc = timTBC(a, n);
		printf("\nTrung binh cong cac phan tu le trong mang la: %0.2f ", tbc);

		printf("\nSap xep theo thu tu tang dan la:");
		Sapxep(a, n);
		xuat(a, n);
		return 0;
	}
