public class Dang1 { // Dang1.2: Kiem tra mang dan dau
    public static void main(String[] args) {
        int check = 0;
        int[] a = { -5, 1, -9, 10, -16 };
        for (int i = 0; i < 4; i++)
            if (a[i] * a[i + 1] > 0) {
                check++;
                break;
            }
        if (check != 0)
            System.out.println("NO");
        else
            System.out.println("YES");
    }
}
