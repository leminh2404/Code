#include "stdio.h"
#include "conio.h"
int main()
{
    int lhminh[50],n; //khai báo tên mảng, giới hạn của mảng, tên biến để nhập
    printf(" Nhap so phan tu cua mang: "); //In ra màn hình
    scanf("%d",&n); //Lệnh nhập giá trị cho biến từ bàn phím, & là địa chỉ của biến
    for(int i=0;i<n;i++) //Dùng vòng lặp for để in và nhập giá trị cho từng phần tử trong mảng, bắt đầu từ lhminh[0] cho đến lhminh[n-1]
    {
        printf(" lhminh[%d]= ",i); //In ra phần tử của mảng mỗi lần lặp
        scanf("%d",&lhminh[i]); //Nhập giá trị cho phần tử mảng
    }
    printf(" Mang vua nhap la:");
    for(int i=0;i<n;i++)
    printf(" %d",lhminh[i]); //In ra giá trị của các phần tử mảng
    int lminh[50][50],x,y;
    printf("\n Nhap so hang cua ma tran: ");
    scanf("%d",&x);
    printf(" Nhap so cot cua ma tran: ");
    scanf("%d",&y);
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf(" lminh[%d][%d]= ",x,y);
            scanf("%d",&lminh[i][j]);
        }
    }
    printf(" Ma tran vua nhap la:");
    for(int i=0;i<x;i++)
    {
        printf("\n");
        for(int j=0;j<y;j++)
        {
            printf(" %d",lminh[i][j]);
        }
    }
    getch();
}