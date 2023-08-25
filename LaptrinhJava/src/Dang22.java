import java.util.Arrays;
import java.util.Stack;

public class Dang22 {
    public static void main(String[] args) { // Dang 2.2: In day con dai nhat co tong > 20
        int[] a = { 5, 1, 9, 10, 16, 4, 6, 8, 3 };
        int[] b = new int[9];
        Arrays.fill(b, 1);
        int max = b[0], p = 0;
        for (int i = 0; i < 8; i++) {
            if (a[i + 1] > a[i])
                b[i + 1] = b[i] + 1;
            if (b[i] > max) {
                max = b[i];
                p = i;
            }
        }
        int S = a[p];
        for (int i = p; i >= 1; i--) {
            if (a[i - 1] < a[i])
                S += a[i - 1];
            else
                break;
        }
        if (S > 20) {
            Stack<Integer> st = new Stack<>();
            st.push(a[p]);
            for (int i = p; i >= 1; i--) {
                if (a[i - 1] < a[i])
                    st.push(a[i - 1]);
                else
                    break;
            }
            while (!st.empty()) {
                int i = st.pop();
                System.out.print(i + " ");
            }
        } else
            System.out.println("Khong co day con dai nhat co tong > 20");
    }
}
