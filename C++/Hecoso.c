#include <stdio.h>

void nhiPhan(int temp1, int count1)
{
    int arr1[100];
    int du, nguyen;
    nguyen = temp1;
    for (int i = 0; i < count1; i++)
    {
        du = nguyen % 2;
        arr1[count1 - i - 1] = du;
        nguyen /= 2;
    }
    printf(" Nhi phan: ");
    for (int i = 0; i < count1; i++)
    {
        printf("%d", arr1[i]);
    }
    printf(" ");
}

void batPhan(int temp2, int count2)
{
    int arr2[100];
    int du, nguyen;
    nguyen = temp2;
    for (int i = 0; i < count2; i++)
    {
        du = nguyen % 8;
        arr2[count2 - i - 1] = du;
        nguyen /= 8;
    }
    printf("\n Bat phan: ");
    for (int i = 0; i < count2; i++)
    {
        printf("%d", arr2[i]);
    }
}

void thapLucPhan(int temp3, int count3)
{
    char arr3[100];

    int du, nguyen;
    nguyen = temp3;
    for (int i = 0; i < count3; i++)
    {
        du = nguyen % 16;
        // Quy ve ma ASCII het
        if (du <= 9)
        {
            du += 48;
        }
        else if ((du >= 10) && (du <= 15))
        {
            du += 55;
        }
        arr3[count3 - i - 1] = du;
        //		arr3[count3-i-1] = (int)du;
        nguyen /= 16;
    }

    printf("\n Thap luc phan: ");
    for (int i = 0; i < count3; i++)
    {
        printf("%c", arr3[i]);
    }
}
int main()
{
    int n, n1, n2, temp1, temp2, temp3;
    int count1 = 0, count2 = 0, count3 = 0;
    printf("Nhap so thap phan: ");
    scanf("%d", &n);

    // Gan temp1,2,3 de truyen du lieu vao ham
    // Gan n1,n2 de check so lan chia
    n1 = n2 = temp1 = temp2 = temp3 = n;

    // check so lan chia cho 2,6,16
    while (n > 0)
    {
        n /= 2;
        count1++;
    }
    while (n1 > 0)
    {
        n1 /= 8;
        count2++;
    }
    while (n2 > 0)
    {
        n2 /= 16;
        count3++;
    }

    //	cout << count1 << " " << count2 << " " << count3;

    nhiPhan(temp1, count1);
    batPhan(temp2, count2);
    thapLucPhan(temp3, count3);
}