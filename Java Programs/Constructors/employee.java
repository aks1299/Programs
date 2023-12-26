import java.util.*;
class employee
{
    int empno;
    String name;
    double basic;
    public employee(int e, String n, double b)
    {
        empno=e;
        name=n;
        basic=b;
    }
    public void net()
    {
        double g,da,hra,pf;
        da=0.48*basic;
        hra=0.15*basic;
        pf=07*basic;
        g=basic+da+hra+pf;
        System.out.println("Net Salary = "+g);
    }
    public void disp()
    {
        System.out.println("Employee Number : "+empno);
        System.out.println("Employee Name : "+name);
    }
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        double bsc;
        String naam;
        int num;
        System.out.println("Enter Employee number : ");
        num=in.nextInt();
        System.out.println("Enter Employee Name : ");
        naam=in.next();
        System.out.println("Enter Basic : ");
        bsc=in.nextDouble();
        employee ob=new employee(num,naam,bsc);
        ob.net();
        ob.disp();
    }
}