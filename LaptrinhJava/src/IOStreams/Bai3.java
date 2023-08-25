package IOStreams;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Bai3 {
   public static void main(String[] args) {
      String a0, a1, a2;
      a0 = "E:/Code/Java/LaptrinhJava/src/IOStreams/words.text";
      a1 = "E:/Code/Java/LaptrinhJava/src/IOStreams/wordsout.txt";
      a2 = "3"; // dịch đi 3 vị trí

      SimpleEncryption se = new SimpleEncryption();

      se.encrypt(a0, a1, Integer.parseInt(a2));// Mã hóa file

      System.out.println("Hien thi file da bi ma hoa");
      se.viewFileContent(a1);
   }

}

class SimpleEncryption {

   void encrypt(String source, String dest, int shiftSize) {

      BufferedReader reader;
      BufferedWriter writer;

      try {
         reader = new BufferedReader(new FileReader(source));
         writer = new BufferedWriter(new FileWriter(dest));
         String line = reader.readLine();
         int data;
         while (line != null) {
            for (int i = 0; i < line.length(); i++) {
               data = (int) line.charAt(i) + shiftSize;
               writer.write(data);
            }
            writer.write((int) '\n');
            line = reader.readLine();
         }
         reader.close();
         writer.close();
      } catch (IOException ie) {
         System.out.println("Failed encrypting the file content.");
      }

   }

   void viewFileContent(String filename) {

      BufferedReader reader;
      try {
         reader = new BufferedReader(new FileReader(filename));
         String line = reader.readLine();
         while (line != null) {
            System.out.println(line);
            line = reader.readLine();
         }
         reader.close();
      } catch (IOException ie) {
         System.out.println("Failed to open file for reading.");
      }
   }

}