import java.util.*;
class student
{
    static String r="";
    public static String cal(int g)
    {
        if(g>80)
        {
            r="Grade A";
        }
        else if(g<=80 && g>=60)
        {
            r="Grade B";
        }
        else if(g<60)
        {
            r="Grade C";
        }
        return r;
    }
    public static void disp()
    {
        System.out.println(r);
    }
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Grade : ");
        int grade;
        grade=in.nextInt();
        student ob=new student();
        String x=ob.cal(grade);
        ob.disp();
    }
}