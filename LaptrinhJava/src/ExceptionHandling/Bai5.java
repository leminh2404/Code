package ExceptionHandling;

import java.util.Scanner;

class IvalidInput extends Exception {
    public IvalidInput() {
    }

    @Override
    public String getMessage() {
        return "Loi nhap!";
    }
}

public class Bai5 {
    static int factorial(int number) throws IvalidInput {
        int facto;
        if (number > 99) {
            throw new IvalidInput();
        } else {
            facto = 1;
            int n = 1;
            while (++n <= number) {
                facto *= n;
            }
        }
        return facto;
    }

    public static void main(String[] args) {
        int inputX, result;
        Scanner sc = new Scanner(System.in);
        inputX = sc.nextInt();
        try {
            result = factorial(inputX);
            System.out.println(result);
        } catch (Exception ex) {
            System.out.println(ex.getMessage());
        } finally {
            System.out.println("Ket thuc!");
        }
    }
}
