import java.util.Scanner;
public class Dinhthuc {
    static double dt(int a[][]) {
        double res = (a[0][0] * a[1][1] * a[2][2] + a[1][0] * a[2][1] * a[0][2] + a[0][1] * a[1][2] * a[2][0])
                - (a[0][2] * a[1][1] * a[2][0] + a[0][0] * a[1][2] * a[2][1] + a[0][1] * a[1][0] * a[2][2]);
        return res;
    }

    static void del(int a[][], int b[][], int m) {
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                b[i][j] = a[i][j];
        for (int i = m; i < 3; i++)
            for (int j = 0; j < 4; j++) {
                b[i][j] = b[i + 1][j];
            }
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                b[i][j] = b[i][j + 1];
    }
    static void output(int b[][]) {
        for (int i = 0; i < 3; i++) {
            System.out.println();
            for (int j = 0; j < 3; j++)
                System.out.print(" " + b[i][j]);
        }
    }
    public static void main(String[] args) {
        int n;
        do {
            System.out.print(" Nhap n: ");
            Scanner scanner = new Scanner(System.in);
            n = scanner.nextInt();
        } while (n <= 0 || n > 4);
        int a[][] = new int[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) {
                System.out.print(" Nhap a[" + i + "][" + j + "]: ");
                Scanner scanner = new Scanner(System.in);
                a[i][j] = scanner.nextInt();
            }
        switch (n) {
            case 1:
                System.out.println(" Dinh thuc cua ma tran = " + a[0][0]);
                break;
            case 2:
                System.out.println(" Dinh thuc cua ma tran = " + (a[0][0] * a[1][1] - a[0][1] * a[1][0]));
                break;
            case 3:
                double m = dt(a);
                System.out.println(" Dinh thuc cua ma tran = " + m);
                break;
            case 4:
                int b[][] = new int[n][n];
                double value;
                double res = 0;
                for (int i = 0; i < n; i++) {
                    del(a, b, i);
                    value = dt(b);
                    res += Math.pow(-1, 2 + i) * value * a[i][0];
                }
                System.out.println(" Dinh thuc cua ma tran = " + res);
                break;
        }
        System.out.println(" + Giai phuong trinh bac nhat ax + b = 0");
        double x, y;
        Scanner sc = new Scanner(System.in);
        System.out.print(" Nhap a: ");
        x = sc.nextInt();
        System.out.print(" Nhap b: ");
        y = sc.nextInt();
        if (x == 0) {
            if (y == 0)
                System.out.println(" Phuong trinh vo so nghiem!");
            else
                System.out.println(" Phuong trinh vo nghiem!");
        } else
            System.out.println(" Phuong trinh co nghiem duy nhat = " + -y / x);
            
    }
}