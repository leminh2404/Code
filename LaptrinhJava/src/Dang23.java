import java.util.Arrays;

public class Dang23 { // Dang 2.3: In day con co so chan lien tiep dai nhat
    public static void main(String[] args) {
        int[] a = { 5, 1, 9, 10, 16, 4, 5, 8, 3 };
        int[] b = new int[9];
        Arrays.fill(b, 1);
        for (int i = 0; i < 9; i++)
            if (a[i] % 2 == 0)
                b[i] = Math.max(b[i], b[i - 1] + 1);
        for (int i = 0; i < 8; i++) {
            if (b[i + 1] > b[i])
                System.out.print(a[i + 1] + " ");
        }
    }
}