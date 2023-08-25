package ExceptionHandling;

public class Bai1_1 {
  /**
   * @param args the command line arguments
   */
  public static void main(String[] args) {
    try {
      System.out.println(3 / 0);
    } catch (Exception ex) {
      System.out.println("Loi chia cho 0!");
    }
  }
}
