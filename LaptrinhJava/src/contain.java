import java.util.ArrayDeque;
import java.util.Collection;

public class contain {

    static int i = 1;
    public static void main(String[] args) {

        Collection<String> collection = new ArrayDeque<>();
        
        collection.add("Rama");
        collection.add("Sham");
        collection.add("Mira");
        collection.add("Rajesh");
        if (collection.contains("Rama")) {
            System.out.println("Rama co trong ds"); // in
        } else {
            System.out.println("Ram ko co trong ds");
        }
    }
}

/*
 * public class contain {
 * static int i = 1;
 * 
 * public static void main(String[] args) {
 * 
 * Collection<String> collection = new ArrayDeque<>();
 * 
 * collection.add(new Person("Rama").toString());
 * collection.add(new Person("Sham").toString());
 * collection.add(new Person("Mira").toString());
 * collection.add(new Person("Rajesh").toString());
 * 
 * if (collection.contains(new Person("Rama"))) {
 * System.out.println("Rama is present");
 * } else {
 * System.out.println("Ram is absent"); // in
 * }
 * }
 * }
 */

class Person {
    String name;

    public Person(String name) {
        this.name = name;
    }
}