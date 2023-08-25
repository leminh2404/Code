package collections_practise;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class comparable {
    public static void main(String[] args) {
        List<sinhvien> sv = new ArrayList<sinhvien>();
        sv.add(new sinhvien(1, "Le Hoang Minh", 19, 8.8f));
        sv.add(new sinhvien(1, "Le Hoang Minh", 19, 8.8f));
        sv.add(new sinhvien(2, "Do Xuan Son", 19, 8.8f));
        sv.add(new sinhvien(0, "Nguyen Ngoc Cuong", 19, 9.0f));
        sv.add(new sinhvien(4, "Tran Huu Tuan", 19, 9.1f));
        sv.add(new sinhvien(5, "Hoang Giang Thanh", 19, 9.2f));
        Collections.sort(sv);
        for (sinhvien sinhvien : sv) {
            System.out.println(sinhvien.toString());
        }
        sinhvien sv1 = new sinhvien(1, "Nguyen Ngoc Cuong", 19, 9.0f);
        int i = Collections.binarySearch(sv, sv1);
        System.out.println(i);
        sinhvien sv2 = new sinhvien(1, "Le Hoang Minh", 19, 8.8f);
        Set<sinhvien> st = new HashSet<sinhvien>();
        st.add(new sinhvien(1, "Le Hoang Minh", 19, 8.8f));
        st.add(new sinhvien(1, "Le Hoang Minh", 19, 8.8f));
        st.add(new sinhvien(2, "Do Xuan Son", 19, 8.8f));
        st.add(new sinhvien(0, "Nguyen Ngoc Cuong", 19, 9.0f));
        st.add(new sinhvien(4, "Tran Huu Tuan", 19, 9.1f));
        st.add(new sinhvien(5, "Hoang Giang Thanh", 19, 9.2f));
        for (sinhvien sinhvien : st) {
            System.out.println(sinhvien);
        }
    }
}
