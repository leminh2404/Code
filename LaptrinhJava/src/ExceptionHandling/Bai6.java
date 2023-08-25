package ExceptionHandling;

import java.util.Scanner;

class ErrorServerConnect extends Exception {
    public ErrorServerConnect() {
    }

    @Override
    public String getMessage() {
        return "Loi ket noi den server!";
    }
}

public class Bai6 {
    public static void check(String acc, String pass) throws ErrorServerConnect {
        if (acc.equals("ADMIN") && pass.equals("13579"))
            return;
        else
            throw new ErrorServerConnect();
    }

    public static void main(String[] args) {
        String acc, pass;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter account: ");
        acc = sc.nextLine();
        System.out.print("Enter password: ");
        pass = sc.nextLine();
        try {
            check(acc, pass);
            System.out.println("Ket noi den server thanh cong!");
        } catch (ErrorServerConnect ex) {
            System.out.println(ex.getMessage());
        } finally {
            System.out.println("End.");
        }
    }
}
