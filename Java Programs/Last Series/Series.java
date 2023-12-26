import java.util.*;
class Series
{
    public double sum,x,n;
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter value of x : ");
        double xm,nm;
        xm=in.nextDouble();
        System.out.println("Enter value of n : ");
        nm=in.nextDouble();
        Series ob=new Series(xm,nm);
        ob.sumseries(xm,nm);
    }
    public Series(double nx, double nn)
    {
        x=nx;
        n=nn;
    }
    public double fact(double d)
    {
        double i,fact=1;
        for(i=1;i<=d;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
    public double power(double a,double b)
    {
        double z=Math.pow(a,b);
        return z;
    }
    public void sumseries(double n,double x)
    {
        double fa=1,xp=0;
        fa=this.fact(x+1);
        System.out.println(fa);
        double sum=0,su,i;
        for(i=1;i<n;i++)
        {
            xp=x*this.power(x,i);
            System.out.println(xp);
            if(i%2==0)
            {
                su=1*(xp/fa);
            }
            else
            {
                su=-1*(xp/fa);
            }
            sum=sum+su;
        }
        System.out.println("Sum = "+sum);
    }
}