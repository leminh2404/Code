package ThucHanhBaiTap1;
public class Dang_1 {
    public static void Exercise_1(int[] a){
        boolean check = true;
        for (int i = 0; i < a.length - 1; i++){
            if (a[i] > a[i + 1]){
                check = false;
                break;
            }
        }
        if (check) System.out.println("mang tang dan");
        else System.out.println("mang khong tang dan");
    }
    public static void Exercise_2(int[] a){
        boolean check = true;
        for (int i = 0; i < a.length - 1; i++){
            if (a[i] * a[i + 1] >= 0){
                check = false;
                break;
            }
        }
        if (check) System.out.println("mang dan dau");
        else System.out.println("mang khong dan dau");
    }
    public static void Exercise_3(int[] a){
        boolean check = true;
        for (int i = 0; i < a.length; i++){
            if(a[i] == 1){ //số 1 không phải số nguyên tố
                check = false;
                break;
            }
            //xét các trường hợp còn lại
            for (int j = 2; j <= Math.sqrt((double) a[i]); j++){
                if (a[i] % j == 0){
                    check = false;
                    break;
                }
            }
        }
        if (check) System.out.println("la mang nguyen to");
        else System.out.println("khong la mang nguyen to");
    }
    public static void main(String[] args){
        int[] a = {1, -4, 2, -5, 2};
        Exercise_1(a);
        Exercise_2(a);
        Exercise_3(a);
    }
}
