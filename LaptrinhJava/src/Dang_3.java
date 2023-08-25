package ThucHanhBaiTap1;

public class Dang_3 {
    public static void ganGiaTri(int[] a, int values){
        for (int i = 0; i < a.length; i++)
            a[i] = values;
    }
    public static void Exercise_1(int[] a){
        //phần tử L[i] lưu độ dài dãy con tại vị trí thứ i
        int[] L = new int[a.length];
        ganGiaTri(L, 1);
        int max = 0;

        for (int i = 1; i < a.length; i++){
              if (a[i] > a[i - 1]) L[i] = L[i - 1] + 1;
              if (L[i] > max) max = L[i];
        }

        for (int i = 0; i < L.length; i++){
            if (L[i] == max){
                System.out.println("\nday con tang dan dai nhat tu vi tri " + (i - max + 1) + " la: ");
                for (int j = i - max + 1; j <= i; j++)
                    System.out.print(" " + a[j]);
            }
        }
    }

    public static void Exercise_2(int[] a){
        //phần tử tong[i] lưu tổng các phần tử của dãy con tai ví trí thứ i
        int[] tong = a.clone();
        int[] L = new int[a.length];
        ganGiaTri(L, 1);
        int max = 0;

        for (int i = 1; i < a.length; i++){
            if (a[i] > a[i - 1]){
                L[i] = L[i - 1] + 1;
                tong[i] += tong[i - 1];
            }
            if (L[i] > max) max = L[i];
        }

        for (int i = 0; i < L.length; i++){
            if (L[i] == max && tong[i] > 100){
                System.out.println("\nday con tang dan dai nhat, co tong > 100, tu vi tri " + (i - max + 1) + " la: ");
                for (int j = i - max + 1; j <= i; j++)
                    System.out.print(" " + a[j]);
            }
        }
    }

    public static void Exercise_3(int[] a){
        int[] L = new int[a.length];
        ganGiaTri(L, 0);
        int max = 0;

        for (int i = 1; i < a.length; i++){
            if (a[i] % 2 == 0 && a[i - 1] % 2 == 0) L[i] = L[i - 1] + 1;
            else if (a[i] % 2 == 0) L[i] = 1;
            if (L[i] > max) max = L[i];
        }

        for (int i = 0; i < L.length; i++){
            if (L[i] == max){
                System.out.println("\nday con chan dai nhat tu vi tri " + (i - max + 1) + " la: ");
                for (int j = i - max + 1; j <= i; j++)
                    System.out.print(" " + a[j]);
            }
        }
    }

    public static void main(String[] args){
        int[] a = {5, 3, 7, 100, 4, 6, 8, 3};
        Exercise_1(a);
        Exercise_2(a);
        Exercise_3(a);
    }
}
