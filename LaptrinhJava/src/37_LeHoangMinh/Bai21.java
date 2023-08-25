class Author {
    private String name;
    private String email;
    private String gender;
    private int age;

    public Author(String name, String email, String gender, int age) {
        this.name = name;
        this.email = email;
        this.gender = gender;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public String getEmail() {
        return email;
    }

    public String getGender() {
        return gender;
    }

    public int getAge() {
        return age;
    }

    public String toString() {
        return "+ Name: " + name + ", email: " + email + ", gender: " + gender + ", age: " + age + "";
    }
}

class Book {
    private String name;
    private Author author;
    private double price;
    private int count;

    public Book(String name, Author author, double price, int count) {
        this.name = name;
        this.author = author;
        this.price = price;
        this.count = count;
    }

    public String getName() {
        return name;
    }

    public Author getAuthor() {
        return author;
    }

    public double getPrice() {
        return price;
    }

    public int getCount() {
        return count;
    }

    public String toString() {
        String s = "+ Name: " + name + "";
        s += "\n + Author: " + author.toString() + "";
        s += "\n+ Price: " + price + "";
        s += "\n+ Count: " + count + "";
        return s;
    }

    public class Bai21 {
        public static void main(String[] args) {

        }
    }
}
