package ExceptionHandling;

public class Bai3 {
    public static void main(String[] args) {
        try {
            int a[] = new int[5];
            a[5] = 30 / 0;
        } catch (ArrayIndexOutOfBoundsException ex) {
            System.out.println("Loi truy cap vao vi tri mang!");
        } catch (Exception ex) {
            System.out.println("Loi chia cho 0");
        } finally {
            System.out.println("Final!");
        }
    }
}