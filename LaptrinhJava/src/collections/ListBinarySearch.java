package collections;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class ListBinarySearch {
    public static void main(String[] args) {

        List<Student> lst = new ArrayList<Student>();// sx theo ten

        lst.add(new Student("A05726", "AA", 8));
        lst.add(new Student("A06338", "AC", 7));
        lst.add(new Student("A05379", "ACD", 5));
        lst.add(new Student("A06338", "AB1", 7));
        lst.add(new Student("A06178", "AD", 9));
        lst.add(new Student("A05786", "AAC", 8));
        System.out.println(lst);

        Collections.sort(lst);// Sort by name

        Student st1 = new Student("A06338", "AC", 1);// Nhap SV can tim kiem (thay)

        // (1) Menu: Tìm kiếm sinh viên theo tên
        int i = Collections.binarySearch(lst, st1);// Search by name

        // Lam sao để tìm được tất cả
        System.out.println("index=" + i);
        if (i >= 0) { 
            System.out.println("Found by name");
            System.out.println(lst.get(i)); //
        }
        // Set, List -- chứa ?
        System.out.println(lst.contains(st1)); // vẫn bặt buộc là overrid: hashCode, equals

        // (2) Menu: Tìm kiếm sinh viên theo mã sinh viên
        Collections.sort(lst, new Comparator<Student>() {
            public int compare(Student st1, Student st2) {
                return st1.getCode().compareTo(st2.getCode());
            }
        });
        System.out.println(lst);
        i = Collections.binarySearch(lst, st1, new Comparator<Student>() {
            public int compare(Student st1, Student st2) {
                return st1.getCode().compareTo(st2.getCode());
            }
        });

        if (i >= 0) {
            System.out.println("Found by Score");
            System.out.println(lst.get(i)); //
        } else
            System.out.println("Ko thay");
        // (3) Menu: Tìm kiếm và in ra tât cả các sinh viên có điểm bằng giá trị nhập
        // vào
        // score=8;
        /*
         * Ko được:
         * for (Student st: lst ) {
         * if (st.getScore().equals(8)) {
         * System.out.println(st);
         * }
         * }
         */
        /*
         * - sort theo score
         * - tìm kiếm theo score
         */

    }
}