import java.util.Scanner;

public class HelloWorld {
    public static void main(String[] args) {
        int x, dem = 0;
        System.out.print(" Nhap x: ");
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        for (int i = 2; i <= Math.sqrt(x); i++) {
            if (x % i == 0) {
                dem++;
                break;
            }
        }
        if (dem == 0)
            System.out.println(" Day la so nguyen to!");
        else
            System.out.println(" Day ko phai so nguyen to!");
    }
}