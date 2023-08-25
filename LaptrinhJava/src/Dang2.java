import java.util.ArrayList;
import java.util.Arrays;
import java.util.Stack;

public class Dang2 {
    public static void main(String[] args) {
        int[] a = { 1, 2, 3, 4, 5, 6, 7, 8, 8 };
        int[] b = new int[9];
        Arrays.fill(b, 1);
        int m = b[0], r = 0;
        for (int i = 0; i < 8; i++) {
            if (a[i + 1] > a[i])
                b[i + 1] = Math.max(b[i + 1], b[i] + 1);
            if (b[i] > m) {
                m = b[i];
                r = i;
            }
        }
        Stack<Integer> st = new Stack<>();
        st.push(a[r]);
        for (int i = r; i >= 1; i--) {
            if (a[i - 1] < a[r])
                st.push(a[i - 1]);
        }
        while (!st.empty()) {
            int i = st.pop();
            System.out.print(i + " ");
        }
    }
}