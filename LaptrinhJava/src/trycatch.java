import java.util.logging.Level;
import java.util.logging.Logger;

public class trycatch {
    /*
     * To change this license header, choose License Headers in Project Properties.
     * To change this template file, choose Tools | Templates
     * and open the template in the editor.
     */
    /**
     *
     * @author DELL E7450
     */
    public static void main(String[] args) {
        System.out.println(" Ko xay ra ngoai le:");
        try {
            A1();
        } catch (Exception ex) {
            System.out.println("Thong bao o A1:" + ex.getMessage());
        }
        System.out.println(" Xay ra ngoai le:");
        try {
            A2();
        } catch (Exception ex) {
            System.out.println("Thong bao o A2:" + ex.getMessage());
        }
    }
    public static float A1() throws Exception {
        float x = 0;
        try {
            System.out.println("1. try ...");
            x = 1 / 1;
            System.out.println("2. try .... ");
        } catch (Exception e) {
            throw new Exception("A1  Exception ....");
        } finally {
            System.out.println("4. Trong finally ");
        }
        System.out.println("5. Sau Try catch ");
        return x;
    }
    public static float A2() throws Exception {
        float x = 0;
        try {
            System.out.println("1. try ...");
            x = 1 / 0;
            System.out.println("2. try .... ");
        } catch (Exception e) {
            throw new Exception("A2 xay ra ngoai le....");
        } finally {
            System.out.println("4. Trong finally ");
        }
        System.out.println("5. Sau Try catch ");
        return x;
    }
}