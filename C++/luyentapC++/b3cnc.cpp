#include <stdio.h>
#include <stdlib.h>
void nhap(int **a, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("nhap a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuat(int **a, int n, int m)
{
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
float tbc(int **a, int n, int m)
{
	int tong = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			tong += a[i][j];
			dem++;
		}
	}
	float tbc = (float)tong / dem;
	return tbc;
}
void ammax(int **a, int n, int m)
{
	int max = a[0][0];
	int test = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] < 0)
			{
				max = a[i][j];
				test = 1;
				break;
			}
		}
	}
	if (test == 0)
		printf("k co so am trong mang \n");
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] < 0 && a[i][j] > max)
					max = a[i][j];
			}
		}
		printf("so am lon nhat trong mang la %d \n", max);
	}
}
void createFile(FILE *file, int **a, int n, int m)
{
	if (file != NULL)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				fprintf(file, "%d ", a[i][j]);
			fprintf(file, "\n");
		}
	}
	fclose(file);
}
void readFile(FILE *file, int **a, int n, int m)
{
	printf("Doc file ra man hinh: \n");
	if (file != NULL)
	{
		char line[100];
		while (fgets(line, sizeof(line), file))
			printf("%s", line);
	}
	fclose(file);
}
int main()
{
	int n, m;
	printf("nhap n va m: ");
	scanf("%d%d", &n, &m);
	int **a = new int *[n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];
	nhap(a, n, m);
	printf("\nMang vua nhap la: \n");
	xuat(a, n, m);
	float tinhtbc = tbc(a, n, m);
	printf("\n tbc cua ma tran tren la: %.2f \n", tinhtbc);
	ammax(a, n, m);
	FILE *file = fopen("matranthuc.txt", "w");
	createFile(file, a, n, m);
	file = fopen("matranthuc.txt", "r");
	readFile(file, a, n, m);
	return 0;
}
