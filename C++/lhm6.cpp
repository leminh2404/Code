#include "stdio.h" //Khai báo thư viện
#include "conio.h"
int main() //Khai báo hàm 
{ int i, n, a[100]; //Khai báo biến, mảng 1 chiều và độ lớn của mảng
      printf("Nhap so phan tu mang: "); //In ra màn hình dòng chữ: "Nhap so phan tu mang:"
      scanf("%d",&n); //Lệnh nhập giá trị cho biến, %d là định dạng chuỗi cho kí tự nhập có kiểu nguyên, &n là địa chỉ của biến n
      printf("Nhap cac phan tu mang:\n"); //In ra màn hình dòng chữ: "Nhap cac phan tu mang:"
      for(i=0;i<n;i++) //Lệnh lặp for với giá trị i bắt đầu là 0 -> xét i với điều kiến i<n, nếu thỏa mãn thì chạy lệnh bên trong vòng lặp, khi thực hiện lệnh xong thì i sẽ tăng lên 1 đơn vị, sau đó lại xét với điều kiện...
      //cứ thế cho đến khi điều kiện i không thỏa mãn vs i<n, vòng lặp for sẽ kết thúc
            {
                  printf("nhap a[%d] = ",i); //In ra màn hình các phần tử của mảng từ a[0] đến a[n-1] sau mỗi vòng lặp
                  scanf("%d",&a[i]); //Lệnh nhập giá trị cho mỗi phần tử mảng sau mỗi vòng lặp
            }
      printf(" Mang vua nhap la:");
      for(i=0;i<n;i++)
            {
                  printf(" %d",a[i]);
            }
            int dem=0;
      for(i=0;i<n;i++)
            {
                  if(a[i]%3==0)
                  {
                        dem++;
                  }
            }
            int b,c;
            if(dem==0)
            {
                  printf("\n Mang vua nhap khong co gia tri nao chia het cho 3");
            }
            else
            {
                  printf("\n Mang vua nhap co %d phan tu chia het cho 3",dem);
                  printf("\n Cac phan tu chia het cho 3 la:");
               for(int i=0;i<n;i++)
            {
                  if(a[i]%3==0)
                  {
                         printf(" a[%d] = %d;",i,a[i]);
                  }
            }   
            }
            getch();  
}