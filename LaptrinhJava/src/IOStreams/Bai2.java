package IOStreams;

import java.io.*;

public class Bai2 {

    public static void main(String[] args) throws IOException {

        File inputFile = new File("E:/Code/Java/LaptrinhJava/src/IOStreams/InputFile.txt");
        File outputFile = new File("E:/Code/Java/LaptrinhJava/src/IOStreams/OutputFile.txt");

        FileReader in = new FileReader(inputFile);
        FileWriter out = new FileWriter(outputFile);
        int c;

        while ((c = in.read()) != -1) {
            System.out.println(c);
            out.write(c);
        }

        System.out.println("FileReader is used to read a file and FileWriter is used for writing.");

        in.close();
        out.close();
    }
}
