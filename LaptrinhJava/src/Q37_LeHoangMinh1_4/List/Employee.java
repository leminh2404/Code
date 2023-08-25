package Q37_LeHoangMinh1_4.List;

import java.util.Date;

public class Employee {
    private String firstName;
    private String lastName;
    private Date joinDate;

    public Employee(String firstName, String lastName, Date joinDate) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.joinDate = joinDate;
    }

    public String getFirstName() {
        return firstName;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public Date getJoinDate() {
        return joinDate;
    }

    public void setJoinDate(Date joinDate) {
        this.joinDate = joinDate;
    }

    public String toString() {
        return "+ First name: " + firstName + ", last name: " + lastName + ", join date: " + joinDate + " \n";
    }
    @Override
    public boolean equals(Object obj) {
        Employee a = (Employee) obj;
        if (this.getFirstName().equals(a.getFirstName())
                && this.getLastName().equals(a.getLastName())
                && this.getJoinDate().equals(a.getJoinDate()))
            return true;
        return false;
    }

}
