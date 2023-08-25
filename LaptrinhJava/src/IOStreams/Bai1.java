package IOStreams;
import java.io.*;

public class Bai1 {

    public static void main(String[] args) throws IOException {

        File inputFile = new File("E:/Code/Java/LaptrinhJava/src/IOStreams/InputFile.txt");
        File outputFile = new File("E:/Code/Java/LaptrinhJava/src/IOStreams/OutputFile.txt");

        FileInputStream in = new FileInputStream(inputFile);
        FileOutputStream out = new FileOutputStream(outputFile);
        int c;

        while ((c = in.read()) != -1) {
            System.out.println(c);
            out.write(c);
        }

        System.out.println("FileInputStream is used to read a file and FileOutPutStream is used for writing.");

        in.close();
        out.close();
    }
}
