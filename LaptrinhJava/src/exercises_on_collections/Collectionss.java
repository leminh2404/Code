package exercises_on_collections;

import java.util.Collections;
import java.net.SocketTimeoutException;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

public class Collectionss {
    public static void main(String[] args) {
        Set<SinhVien> lst = new HashSet<SinhVien>();
        lst.add(new SinhVien("123", "Nguyen Van A", 7));
        lst.add(new SinhVien("124", "Nguyen Van A", 8));
        lst.add(new SinhVien("125", "Nguyen Van B", 9));
        lst.add(new SinhVien("126", "Nguyen Van C", 10));
        lst.add(new SinhVien("127", "Nguyen Van A", 8));
        lst.add(new SinhVien("128", "Nguyen Van D", 8));
        lst.add(new SinhVien("129", "Nguyen Van E", 8));
        for (SinhVien sinhVien : lst) {
            System.out.println(sinhVien);
        }
        // Scanner sc = new Scanner(System.in);
        // for (SinhVien sinhVien : lst) {
        // System.out.println(sinhVien);
        // }
        // int n;
        // SinhVien svien = new SinhVien();
        // while (true) {
        // System.out.println("(MENU)");
        // System.out.println("(1): Tim kiem theo ten: ");
        // System.out.println("(2): Tim kiem theo ma: ");
        // System.out.println("(3): Tim kiem theo diem: ");
        // System.out.print("Nhap lua chon: ");
        // n = sc.nextInt();
        // switch (n) {
        // case 1:
        // String sv;
        // System.out.print("Nhap ten sinh vien muon tim: ");
        // Scanner sc1 = new Scanner(System.in);
        // sv = sc1.nextLine();
        // svien.setTensv(sv);
        // for (SinhVien sinhVien : lst) {
        // if (svien.equals(sinhVien))
        // System.out.println(sinhVien);
        // }
        // Collections.sort(lst, new Comparator<SinhVien>() {
        // @Override
        // public int compare(SinhVien sv1, SinhVien sv2) {
        // return sv1.getMasv().compareTo(sv2.getMasv());
        // }
        // });
        // break;

        // case 2:
        // System.out.print("Nhap ma sinh vien muon tim: ");
        // String ma;
        // Scanner sc2 = new Scanner(System.in);
        // ma = sc2.nextLine();
        // svien.setMasv(ma);
        // int i = Collections.binarySearch(lst, svien, new Comparator<SinhVien>() {
        // @Override
        // public int compare(SinhVien svien, SinhVien sv2) {
        // return svien.getMasv().compareTo(sv2.getMasv());
        // }
        // });
        // if (i >= 0) {
        // System.out.println("Thong tin sinh vien co ma " + ma + ": ");
        // System.out.println(lst.get(i));
        // } else
        // System.out.println("Khong tim thay!");
        // break;
        // case 3:
        // int d;
        // System.out.print(" Nhap diem muon tim: ");
        // Scanner sc3 = new Scanner(System.in);
        // d = sc3.nextInt();
        // svien.setDiem(d);
        // Collections.sort(lst, new Comparator<SinhVien>() {
        // @Override
        // public int compare(SinhVien sv1, SinhVien sv2) {
        // return Float.compare(sv1.getDiem(), sv2.getDiem());
        // }
        // });
        // System.out.println("Danh sach sinh vien co diem = " + d + ": ");
        // List<SinhVien> lst2 = new ArrayList<SinhVien>();
        // lst2 = lst;
        // while (Collections.binarySearch(lst2, svien, new Comparator<SinhVien>() {
        // @Override
        // public int compare(SinhVien svien, SinhVien sv1) {
        // return Float.compare(svien.getDiem(), sv1.getDiem());
        // }
        // }) >= 0) {
        // int x = Collections.binarySearch(lst2, svien, new Comparator<SinhVien>() {
        // @Override
        // public int compare(SinhVien svien, SinhVien sv1) {
        // return Float.compare(svien.getDiem(), sv1.getDiem());
        // }
        // });
        // System.out.println(lst.get(x));
        // lst2.remove(x);
        // }
        // break;
        // default:
        // break;
        // }
        // }
    }
}
