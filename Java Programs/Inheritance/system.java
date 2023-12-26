import java.util.*;
public class system
{
    public void main()
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Name : ");
        String naam,auth;
        double price,da;
        naam=in.nextLine();
        System.out.println("Enter name of author : ");
        auth=in.nextLine();
        System.out.println("Enter Price : ");
        price=in.nextDouble();
        System.out.println("Enter number of days : ");
        da=in.nextInt();
        Compute ob=new Compute(naam,auth,price,da);
        ob.show();
        ob.fine();
        ob.display();
    }
}
class Library
{
    public String Name;
    public String Author;
    public double P;
    public Library(String n, String a, double p)
    {
        Name=n;
        Author=a;
        P=p;
    }
    public void show()
    {
        System.out.println("Name of Book : "+Name);
        System.out.println("Name of author : "+Author);
    }
}
class Compute extends Library
{
    public double days,fine,total,daysm;
    public Compute(String n,String a,double p,double d)
    {
        super(n,a,p);
        days=d;
        fine=0.0;
        total=0.0;
    }
    public void fine()
    {
        daysm=days-7;
        if(daysm <=1 && daysm >=5 )
        {
            fine=daysm*2;
        }
        else if(daysm <=6 && daysm >=10 )
        {
            fine=daysm*3;
        }
        else if(daysm > 10)
        {
            fine=daysm*5;
        }
        total=((0.02*P)*days)+fine;
    }
    public void display()
    {
        System.out.println("Number of days : "+days);
        System.out.println("Fine : "+fine);
        System.out.println("Total : "+total);
    }
}