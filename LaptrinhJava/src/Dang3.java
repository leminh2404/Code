import javax.naming.ldap.ManageReferralControl;

public class Dang3 {
    public static void main(String[] args) {
        
        int[] L = new int[a.length];
        ganGiaTri(L, 1);
        int max = 0;

        for (int i = 1; i < a.length; i++){
              if (a[i] > a[i - 1]) L[i] = L[i - 1] + 1;
              if (L[i] > max) max = L[i];
        }

        for (int i = 0; i < L.length; i++){
            if (L[i] == max){
                System.out.println("\nday con tang dan dai nhat tu vi tri " + (i - max + 1) + " la: ");
                for (int j = i - max + 1; j <= i; j++)
                    System.out.print(" " + a[j]);
            }
        }
    }
}
