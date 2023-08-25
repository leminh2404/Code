class Person {
    private String name;
    private String address;

    public Person() {
    }

    public Person(String name, String address) {
        this.name = name;
        this.address = address;
    }

    public String getName() {
        return name;
    }

    public String getAddress() {
        return address;
    }
}

class Student extends Person {
    private String program;
    private int year;
    private double score;

    public Student() {
    }

    public Student(String program, int year, double score) {
        this.program = program;
        this.year = year;
        this.score = score;
    }

    public Student(String name, String address, String program, int year, double score) {
        super(name, address);
        this.program = program;
        this.year = year;
        this.score = score;
    }

    public String getProgram() {
        return program;
    }

    public void setProgram(String program) {
        this.program = program;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public double getScore() {
        return score;
    }

    public void setScore(double score) {
        this.score = score;
    }

    public String getRating() {
        if (score < 5)
            return "Fail";
        return "Pass";
    }
}

class Staff extends Person {
    private String school;
    private double salary;

    public Staff() {
    }

    public Staff(String school, double salary) {
        this.school = school;
        this.salary = salary;
    }

    public Staff(String name, String address, String school, double salary) {
        super(name, address);
        this.school = school;
        this.salary = salary;
    }

    public String getSchool() {
        return school;
    }

    public void setSchool(String school) {
        this.school = school;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public double upToSalary(int precent) {
        return salary * precent;
    }
}

public class Bai24 {
    public static void main(String[] args) {

    }
}
