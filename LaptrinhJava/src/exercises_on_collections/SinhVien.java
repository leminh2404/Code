package exercises_on_collections;

public class SinhVien {
    private String masv;
    private String tensv;
    private int diem;

    SinhVien() {
    }

    public SinhVien(String tensv) {
        this.tensv = tensv;
    }

    public SinhVien(String masv, String tensv, int diem) {
        this.masv = masv;
        this.tensv = tensv;
        this.diem = diem;
    }

    public void setMasv(String masv) {
        this.masv = masv;
    }

    public void setTensv(String tensv) {
        this.tensv = tensv;
    }

    public void setDiem(int diem) {
        this.diem = diem;
    }

    public String getMasv() {
        return masv;
    }

    public String getTensv() {
        return tensv;
    }

    public float getDiem() {
        return diem;
    }

    public String toString() {
        return "+ Ma sinh vien: " + masv + ", ho ten: " + tensv + ", diem: " + diem + "";
    }

    public boolean equals(Object obj) {
        SinhVien sv = (SinhVien) obj;
        return this.getTensv().equals(sv.getTensv());
    }
    public int hashCode()
    {
        return diem;
    }
}
