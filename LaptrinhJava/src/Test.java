public class Test {
    public static void main(String[] args) {
        int[] A = { 5, 1, 9, 10, 16, 4, 6, 8, 3 };
        int Length = 1;
        int max = 1;
        int start = 0;
        int end = 0;
        for (int i = 0; i < 8; i++) {
            if (A[i] < A[i + 1]) {
                Length++;
                if (Length > max) {
                    max = Length;
                    start = i + 2 - Length;
                    end = i + 2;
                }
            } else
                Length = 1;
        }
        for (int i = start; i < end; i++)
            System.out.print(A[i] + " ");

    }
}
