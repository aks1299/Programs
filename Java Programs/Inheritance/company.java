import java.util.*;
public class company
{
    public  void main()
    {
        Scanner in=new Scanner(System.in);
        String naam;
        double ba,hr,ra,wa,waf;
        System.out.println("Enter Name : ");
        naam=in.nextLine();
        System.out.println("Enter basic : ");
        ba=in.nextDouble();
        System.out.println("Enter hours : ");
        hr=in.nextDouble();
        System.out.println("Enter rate : ");
        ra=in.nextDouble();
        Wages ob=new Wages(naam,ba,hr,ra);
        waf=ob.overtime();
        ob.display();
    }
}
class Worker
{
    public String Name;
    public double basic;
    public Worker(String n,double b)
    {
        Name=n;
        basic=b;
    }
}
class Wages extends Worker
{
    public double hrs;
    public double rate;
    public double wage;
    public Wages(String n, double b,double h, double r)
    {
        super(n,b);
        hrs=h;
        rate=r;
    }
    public double overtime()
    {
       double over;
        over=hrs*rate;
        wage=wage+over+basic;
        return wage;
    }
    public void display()
    {
        System.out.println("Name of Worker : "+Name);
        System.out.println("Basic Salary : "+basic);
        System.out.println("Number of hours : "+hrs);
        System.out.println("Rate : "+rate);
        System.out.println("Wage : "+wage);
    }
}
 