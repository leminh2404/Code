package Q37_LeHoangMinh1_4.Set;

import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.HashSet;
import java.util.Set;

public class Bai2_2 {
    public static void main(String[] args) throws ParseException {
        DateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd");
        Set<Employee> setEmps = new HashSet<>();
        Employee employee1 = new Employee("Tom", "Eagar", dateFormat.parse("2007-12-03"));
        Employee employee2 = new Employee("Tom", "Smith", dateFormat.parse("2005-06-20"));
        Employee employee3 = new Employee("Bill", "Joy", dateFormat.parse("2009-01-31"));
        Employee employee4 = new Employee("Bill", "Gates", dateFormat.parse("2005-05-12"));
        Employee employee5 = new Employee("Alice", "Wden", dateFormat.parse("2009-01-22"));
        setEmps.add(employee1);
        setEmps.add(employee2);
        setEmps.add(employee3);
        setEmps.add(employee4);
        setEmps.add(employee5);
        System.out.println(setEmps);
        Employee employee = new Employee("Bill", "Joy", dateFormat.parse("2009-01-31"));
        Boolean b = setEmps.contains(employee);
        System.out.println(b);
    }

}
