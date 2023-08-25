class Address {
    private String country;
    private String city;
    private String district;
    private String street;

    public Address(String country, String city, String district, String street) {
        this.country = country;
        this.city = city;
        this.district = district;
        this.street = street;
    }

    public String getCountry() {
        return country;
    }

    public String getCity() {
        return city;
    }

    public String getDistrict() {
        return district;
    }

    public String getStreet() {
        return street;
    }

    public String toString() {
        return "+ Country: " + country + ", city: " + city + ", district: " + district + ", street: " + district + "";
    }
}

class Student {
    private String name;
    private int age;
    private double score;
    private Address address;

    public Student() {
    }

    public Student(String name, int age, double score, Address address) {
        this.name = name;
        this.age = age;
        this.score = score;
        this.address = address;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public double getScore() {
        return score;
    }

    public void setScore(double score) {
        this.score = score;
    }

    public Address getAddress() {
        return address;
    }

    public void setAddress(Address address) {
        this.address = address;
    }

    public String getRating() {
        if (score < 5)
            return "Fail";
        return "Pass";
    }

    public class Bai22 {
        public static void main(String[] args) {

        }
    }
}
