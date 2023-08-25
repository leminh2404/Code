import java.util.Arrays;

public class MultipleChoiceTest {
    public static void main(String[] args) {
        String st = "ABACCDEEADDBABCAEEADEDDACBEEADCBAEDCEEADABDCCDEEADBBECCDEEADBBACCDEEADEBECCDEEAD";
        String ans = "DBDCCDAEAD";
        char[] s = st.toCharArray();
        char[] a = ans.toCharArray();
        int[] res = new int[8];
        int m = 0;
        Arrays.fill(res, 0);
        for (int i = 0; i < s.length; i += 10) {
            for (int j = 0; j < ans.length(); j++) {
                int b = i;
                if (s[b] == a[j]) {
                    res[m]++;
                    b++;
                }
            }
            m++;
        }
        for (int i : res)
            System.out.println(i + " ");
    }
}
