 

import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Comparator;
import java.util.Date;
import java.util.Iterator;
import java.util.Map;
import java.util.TreeMap;

class NguoiGuiTien {
    private int Ma;
    private String Hoten;
    private String Diachi;
    private String Sodienthoai;
    private Date Ngaysinh;

    public NguoiGuiTien() {
    }

    public NguoiGuiTien(int ma, String hoten, String diachi, String sodienthoai, Date ngaysinh) {
        this.Ma = ma;
        this.Hoten = hoten;
        this.Diachi = diachi;
        this.Sodienthoai = sodienthoai;
        this.Ngaysinh = ngaysinh;
    }

    public int getMa() {
        return Ma;
    }

    public void setMa(int ma) {
        this.Ma = ma;
    }

    public String getHoten() {
        return Hoten;
    }

    public void setHoten(String hoten) {
        this.Hoten = hoten;
    }

    public String getDiachi() {
        return Diachi;
    }

    public void setDiachi(String diachi) {
        this.Diachi = diachi;
    }

    public String getSodienthoai() {
        return Sodienthoai;
    }

    public void setSodienthoai(String sodienthoai) {
        this.Sodienthoai = sodienthoai;
    }

    public Date getNgaysinh() {
        return Ngaysinh;
    }

    public void setNgaysinh(Date ngaysinh) {
        this.Ngaysinh = ngaysinh;
    }

    public String toString() {
        return "+ Ma: " + Ma + ", ho ten: " + Hoten + ", dia chi: " + Diachi + ", so dien thoai: " + Sodienthoai
                + ", ngay sinh: " + Ngaysinh + "\n";
    }

    @Override
    public boolean equals(Object obj) {
        NguoiGuiTien a = (NguoiGuiTien) obj;
        if (this.getDiachi().equals(a.getDiachi())
                && this.getHoten().equals(a.getHoten())
                && this.getSodienthoai().equals(a.getSodienthoai())
                && this.getNgaysinh().equals(a.getNgaysinh()))
            return true;
        return false;
    }
}

public class Bai1 {
    public static void main(String[] args) throws ParseException {
        DateFormat date = new SimpleDateFormat("yyyy-MM-dd");
        Comparator<NguoiGuiTien> cpt = new Comparator<NguoiGuiTien>() {
            @Override
            public int compare(NguoiGuiTien n1, NguoiGuiTien n2) {
                return n1.getMa() - n2.getMa();
            }
        };
        TreeMap<NguoiGuiTien, Double> ngt = new TreeMap<NguoiGuiTien, Double>(cpt);
        NguoiGuiTien a1 = new NguoiGuiTien(1, "Nguyen Van A", "Ha Noi", "112233", date.parse("2003-5-26"));
        NguoiGuiTien a2 = new NguoiGuiTien(3, "Nguyen Van B", "Nam Dinh", "112244", date.parse("2003-08-10"));
        NguoiGuiTien a3 = new NguoiGuiTien(2, "Nguyen Thi C", "Ninh Binh", "112255", date.parse("2003-02-02"));
        NguoiGuiTien a4 = new NguoiGuiTien(5, "Nguyen Thi D", "Hai Duong", "112266", date.parse("2003-07-30"));
        NguoiGuiTien a5 = new NguoiGuiTien(4, "Nguyen Van E", "Ha Nam", "112277", date.parse("2003-01-01"));
        ngt.put(a1, 1d);
        ngt.put(a2, 2d);
        ngt.put(a3, 4d);
        ngt.put(a4, 5d);
        ngt.put(a5, 3d);
        for (Map.Entry<NguoiGuiTien, Double> entry : ngt.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }
    }
}
