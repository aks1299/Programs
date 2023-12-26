import java.util.*;
class fandl
{
    int n;
    public fandl(int a)
    {
        n=a;
    }
    public void cal()
    {
        int m,r2,r,s=0,r1,s1=0;
        m=n;
        r1=m%10;
        while(m>0)
        {
            r=m%10;
            s=s*10+r;
            m=m/10;
        }
        r2=s%10;
        if(r1==r2)
        {
            System.out.println("The First and last digits are same.");
        }
        else
        {
            System.out.println("The digits are not same.");
        }
    }
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        int x;
        System.out.println("Enter Number : ");
        x=in.nextInt();
        fandl obj=new fandl(x);
        obj.cal();
        
    }
}