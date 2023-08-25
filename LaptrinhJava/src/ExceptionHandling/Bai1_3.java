package ExceptionHandling;

import java.io.*;

class ListOfNumbers {
    private int[] arr;
    private static final int SIZE = 10;

    public ListOfNumbers() {
        arr = new int[SIZE];
        for (int i = 0; i < SIZE; i++)
            arr[i] = i;
    }

    public void writeList() throws IOException {
        PrintWriter out = null;
        try {
            System.out.println("Entering try statement");
            out = new PrintWriter(new FileWriter("E:/Code/Java/LaptrinhJava/src/ExceptionHandling/OutFile.txt"));
            for (int i = 0; i < (SIZE + 1); i++)
                System.out.println("Value at: " + i + " = " + arr[i]);
        } catch (FileNotFoundException ex) {
            System.out.println("Khong tim thay file!");
        } catch (ArrayIndexOutOfBoundsException ex) {
            System.out.println("Loi truy cap vao vi tri cua mang!");
        } finally {
            if (out != null) {
                System.out.println("Finally: Closing PrintWriter");
                out.close();
            } else {
                System.out.println("Finally: PrintWriter not open");
            }
        }
    }

}

public class Bai1_3 {
    public static void main(String[] args) throws IOException {
        ListOfNumbers lst = new ListOfNumbers();
        lst.writeList();
    }
}
