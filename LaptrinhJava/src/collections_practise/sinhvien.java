package collections_practise;

public class sinhvien implements Comparable<sinhvien> {
    private int masv;
    private String tensv;
    private int tuoi;
    private float dtk;

    public sinhvien() {
    }

    public sinhvien(int masv, String tensv, int tuoi, float dtk) {
        this.masv = masv;
        this.tensv = tensv;
        this.tuoi = tuoi;
        this.dtk = dtk;
    }

    public String toString() {
        return "+ Ma sinh vien: " + masv + ", ho ten sinh vien: " + tensv + ", tuoi: " + tuoi + ", diem tong ket: "
                + dtk + "";
    }

    @Override
    public int compareTo(sinhvien sv) {
        return sv.masv - this.masv;
    }

    public boolean equals(Object obj) {
        sinhvien a = (sinhvien) obj;
        return this.masv == a.masv;
    }
    public int hashCode()
    {
        return masv;
    }
}
