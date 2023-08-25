package Q37_LeHoangMinh1_4.List;

import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.List;

public class Bai1_2_2 {
    public static void main(String[] args) throws ParseException {
        DateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd");
        List<Employee> listEmployees = new ArrayList<Employee>();
        Employee employee1 = new Employee("Tom", "Eagar", dateFormat.parse("2007-12-03"));
        Employee employee2 = new Employee("Tom", "Smith", dateFormat.parse("2005-06-20"));
        Employee employee3 = new Employee("Bill", "Joy", dateFormat.parse("2009-01-31"));
        Employee employee4 = new Employee("Bill", "Gates", dateFormat.parse("2005-05-12"));
        Employee employee5 = new Employee("Alice", "Wden", dateFormat.parse("2009-01-22"));
        listEmployees.add(employee1);
        listEmployees.add(employee2);
        listEmployees.add(employee3);
        listEmployees.add(employee4);
        listEmployees.add(employee5);
        Employee employee = new Employee("Bill", "Joy", dateFormat.parse("2009-01-31"));
        Boolean b = listEmployees.contains(employee);
        System.out.println(b);
    }
}
