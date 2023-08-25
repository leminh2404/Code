#include "stdio.h"
#include "math.h"
#include "conio.h"
int main()
{
    int lhminh[50][50],m,n;
    printf(" Nhap so hang cua ma tran: ");
    scanf("%d",&m);
    printf(" Nhap so cot cua ma tran: ");
    scanf("%d",&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" lhminh[%d][%d]= ",i,j);
            scanf("%d",&lhminh[i][j]);
        }
    }
    int c=0;
    float T;
    for(int i=0;i<m;i++)
    if(lhminh[i][0]%2==1)
    {
        T+=lhminh[i][0];
        c++;
    }
    if(c==0)
    printf(" Cot 1 ma tran khong co so le");
    else
    printf(" TBC cac phan tu le ma tran = %g",T/c);
    getch();
}