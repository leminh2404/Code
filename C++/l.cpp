#include <stdio.h>
#include <math.h>
#include <malloc.h>

void Nhap( int *p, int n )
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]=",i);
        scanf("%d",p+i);
    }
}

void Xuat( int *p, int n )
{
    for (int i = 0; i < n; i++)
    {
        printf("%d   ",*( p+i ) );
    }
}

int TongLeAm( int *p, int n )
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if( *( p+i ) < 0 && *( p+i ) % 2 != 0 )
        {
            sum += *( p+i );
        }
    }
    return sum;
}

void SapXep( int *p, int n )
{
    for (int i = 0; i < n-1; i++ )
    {
        for (int j = i+1 ; j < n; j++ )
        {
            if( *( p+ i ) > *( p+j ) )
            {
                int temp = *( p+i );
                *( p+i ) = *( p+j );
                *( p+j ) = temp;
            }
        }
    }
}

void Check( int *p, int n )
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if( *( p+i ) % 3 == 0 && *( p+i ) < 50 )
        {
            count ++;
        }
    }
    if( count == 0 )
       printf("0");
    else
    for (int i = 0; i < n; i++)
    {
        if( *( p+i ) % 3 == 0 && *( p+i ) < 50 )
        {
            printf("%d  ",*( p+i ) );
        }
    }
}

void ThemPhanTu( int *p, int &n, int x, int k )
{
    for( int i = n; i > k; i-- )
    {
        *( p+i ) = *( p+i-1 );
    }
    *( p+k ) = x;
    n++;
}

int Prime( int n )
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if( n % i == 0 ) return 0;
    }
    return n > 1;
}

int KiemTra( int *p, int n, int y )
{
    for (int i = 0; i < n; i++)
    {
        if( *( p+i ) == y ) return 1;
    }
    return 0;
}


int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    
    int *p;
    p = (int*)malloc( n*sizeof(int) );

    Nhap( p, n );
    printf("Cac phan tu cua mang: ");
    Xuat( p, n );

    if( TongLeAm( p, n ) == 0 )  
        printf("\nMang khong co gia tri am le");
    else
        printf("\nTong cac phan tu am le cua mang: %d", TongLeAm( p, n ) );

    SapXep( p, n );
    printf("\nMang sap xep tang dan: ");
    Xuat( p, n );

    printf("\nCac phan tu chia het cho 3 va nho hon 50 : ");
    Check( p , n );

    int x, k;
    printf("\nGia tri can them: "); scanf("%d",&x);
    do
    {
        printf("Vi tri can them: "); scanf("%d",&k);
    } while ( k < 0 || k >= n ) ;
    

    ThemPhanTu( p, n, x, k );
    printf("\nMang sau khi them: "); 
    Xuat( p, n );

    printf("\nCac so nguyen to trong mang: ");
    for (int i = 0; i < n; i++)
    {
        if( Prime( *( p+i ) ) == 1 )
            printf("%d   ",*( p+i ) );
    }


    int y;
    printf("\nGia tri can kiem tra: ");
    scanf("%d",&y);
    if( KiemTra( p, n, y) )
        printf("\n%d co ton tai trong mang!!",y);
    else  printf("\n%d khong ton tai trong mang!!! ",y);
    
}
