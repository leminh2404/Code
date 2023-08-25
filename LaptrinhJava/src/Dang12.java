public class Dang12 {
    public static void main(String[] args) {
        int[] a = { 1, -4, 2, -5, 2 };
        int check = 0;
        for (int i = 0; i < a.length - 1; i++) {
            if (a[i] * a[i + 1] >= 0) {
                check++;
                break;
            }
        }
        if (check == 0)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
