import java.util.*;
class pqr
{
    public static double xp(double a,double b)
    {
        double p;
        p=Math.pow(((a*a)+(b*b)-(a*b)),0.5);
        return p;
    }
    public static double xq(double a,double b)
    {
        double q;
        q=(a*a)/(b*b);
        return q;
    }
    public static double xr(double a,double b)
    {
        double r;
        r=(a*a)-b-(a*2);
        return r;
    }
    public static void main(String[] args)
    {
        double x1,x2,i,j,s=0,s1=0,p1,q1,r1;
        for(i=5;i<=50;i++)
        {
            if(i%5==0)
            {
                s=s+i;
            }
        }
        for(j=2;j<=20;j++)
        {
            if(j%2==0)
            {
                s1=s1+i;
            }
        }
        pqr ob=new pqr();
        p1=ob.xp(s,s1);
        q1=ob.xq(s,s1);
        r1=ob.xr(s,s1);
        System.out.println("P= "+p1);
        System.out.println("Q= "+q1);
        System.out.println("R= "+r1);
    }
}