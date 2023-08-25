package Q37_LeHoangMinh1_4.List;

import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class App {
    public static void main(String[] args) throws ParseException {
        DateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd");
        List<Person> list = new ArrayList<Person>();
        Person employee1 = new Person("Tom", "Eagar", dateFormat.parse("2007-12-03"));
        Person employee2 = new Person("Tom", "Smith", dateFormat.parse("2005-06-20"));
        Person employee3 = new Person("Bill", "Joy", dateFormat.parse("2009-01-31"));
        Person employee4 = new Person("Bill", "Gates", dateFormat.parse("2005-05-12"));
        Person employee5 = new Person("Alice", "Wden", dateFormat.parse("2009-01-22"));

        list.add(employee1);
        list.add(employee2);
        list.add(employee3);
        list.add(employee4);
        list.add(employee5);
        System.out.println("Before sorting: ");
        System.out.println(list);
        // Yêu cầu 1:
        // 1.1: Sắp xếp theo joinDate
        Collections.sort(list, new Comparator<Person>() {
            @Override
            public int compare(Person p1, Person p2) {
                return p1.getJoinDate().compareTo(p2.getJoinDate());
            }
        }); //
        System.out.println("After sorting1: ");
        System.out.println(list);
        Person employee = new Person("Bill", "Joy",
                dateFormat.parse("2009-01-31"));
        // 1.2: Thực hiện tìm kiếm
        int i = Collections.binarySearch(list, employee, new Comparator<Person>() {
            @Override
            public int compare(Person employee, Person e2) {
                return employee.getJoinDate().compareTo(e2.getJoinDate());
            }
        });
        if (i >= 0)
            System.out.println("Tim thay");
        else
            System.out.println("Khong tim thay!");
        // Yêu cầu 2
        // 2.1: Sắp xếp theo firstName và lastName
        System.out.println("Before sorting2: "); // Sap xep theo first name va last name
        System.out.println(list);
        Collections.sort(list);
        System.out.println("After sorting2: ");
        System.out.println(list);
        // 2.2: Thực hiện tìm kiếm
        i = Collections.binarySearch(list, employee, new Comparator<Person>() {
            @Override
            public int compare(Person employee, Person p1) {
                if (employee.getFirstName().equals(p1.getFirstName()))
                    return employee.getLastName().compareTo(p1.getLastName());
                return employee.getFirstName().compareTo(p1.getFirstName());
            }
        });
        if (i >= 0)
            System.out.println("Tim thay");
        else
            System.out.println("Khong tim thay!");
    }
}
