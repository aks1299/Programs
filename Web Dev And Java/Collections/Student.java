import java.util.Comparator;
import java.util.Objects;

public class Student implements Comparable<Student> 
{

    String name;
    int rollNo;

    public Student(String name, int rollNo) 
    {
        this.name = name;
        this.rollNo = rollNo;
    }

    @Override
    public String toString() 
    {
        return "Student{" +
                "name='" + name + '\'' +
                ", rollNo=" + rollNo +
                '}';
    }

    @Override
    public boolean equals(Object ob) 
    {
        if (this == ob) 
        {
            return true;
        }
        if (ob == null || getClass() != ob.getClass())
        {
            return false;
        }
        Student student = (Student) ob;
        return rollNo == student.rollNo;
    }

    @Override
    public int hashCode() 
    {
        return Objects.hash(rollNo);
    }

    @Override
    public int compareTo(Student that) 
    {
        return this.rollNo - that.rollNo;
    }
}
