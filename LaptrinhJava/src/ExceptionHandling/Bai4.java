package ExceptionHandling;

class IvalidInput extends Exception {
    public IvalidInput() {
    }

    @Override
    public String getMessage() {
        return "Loi nhap!";
    }
}

public class Bai4 {
    static int factorial(int number) throws Exception {
        int facto = 1;
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
}
