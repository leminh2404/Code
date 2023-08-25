public class Dang13 { // Dang 1.3: Kiem tra cac phan tu nguyen to
    static boolean check(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i <= Math.sqrt(n); i++)
            if (n % i == 0)
                return false;
        return true;
    }

    public static void main(String[] args) {
        int check = 0;
        int[] a = { 5, 1, 9, 10, 16 };
        for (int i = 0; i < 5; i++)
            if (!check(a[i])) {
                check++;
                break;
            }
        if (check == 0)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}