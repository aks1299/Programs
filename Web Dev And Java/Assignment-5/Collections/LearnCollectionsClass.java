import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class LearnCollectionsClass {

    public static void main(String[] args) {

        List<Student> list = new ArrayList<>();

        list.add(new Student("Anuj", 2));
        list.add(new Student("Ramesh", 4));
        list.add(new Student("Shivam", 3));
        list.add(new Student("Rohit", 1));

        Student s1 = new Student("Anuj", 2);
        Student s2 = new Student("Rohit", 3);

        System.out.println(list);

        Collections.sort(list, (o1, o2) -> o1.name.compareTo(o2.name));

        System.out.println(list);
    }

}
