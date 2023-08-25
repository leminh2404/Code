public class BT1 {
    public static void main(String[] args) {
        int[] A = { 5, 6, 9, 10, 16 };
        int max = A[0];
        for (int i = 0; i < 5; i++)
            max = Math.max(max, A[i]);
        int check = 0;
        for (int i = A.length - 1; i >= 1; i--)
            if (A[i] <= A[i - 1]) {
                check++;
                break;
            }
        if (check == 0)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
