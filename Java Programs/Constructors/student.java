import java.util.*;
class student
{
    double m1,m2,m3,avg;
    public student(double a,double b,double c)
    {
        m1=a;
        m2=b;
        m3=c;
    }
    public void cal()
    {
        avg=(m1+m2+m3)/3;
    }
    public void disp()
    {
        System.out.println("Marks for 1st: "+m1);
        System.out.println("Marks for 2nd: "+m2);
        System.out.println("Marks for 3rd: "+m3);
        System.out.println("Average Marks: "+avg);
    }
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter marks for 1st: ");
        double num,num1,num2;
        num=in.nextDouble();
        System.out.println("Enter marks for 2nd:");
        num1=in.nextDouble();
        System.out.println("Enter marks for 3rd:");
        num2=in.nextDouble();
        student ob=new student(num,num1,num2);
        ob.cal();
        ob.disp();
    }
}