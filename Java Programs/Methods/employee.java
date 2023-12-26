import java.util.*;
class employee
{
    public static double net(double basic)
    {
        double g,hr,da,it;
        hr=0.48*basic;
        da=0.15*basic;
        it=0.07*basic;
        g=(hr+da)-it;
        return g;
    }
    public static void main(String[] args)
    {
        String emp;
        double b,bc;
        int empn;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Employee name");
        emp=in.next();
        System.out.println("Enter Employee number");
        empn=in.nextInt();
        System.out.println("Enter basic");
        b=in.nextDouble();
        employee ob=new employee();
        bc=ob.net(b);
        System.out.println("Employee Name : "+emp);
        System.out.println("Employee Number : "+empn);
        System.out.println("Net Salary : "+bc);
    }
}