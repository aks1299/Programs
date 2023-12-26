import java.util.*;
class Hcf
{
    int n,m;
    public Hcf(int n1,int n2)
    {
        n=n1;
        m=n2;
    }
    public void hcf()
    {
        int hcf=1;
        for(int i = 1; i <= n && i <= m; ++i) 
        {
          if(n % i == 0 && m % i == 0)
            {
                hcf=i;
            }
        }
        System.out.println(hcf);
    }
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter 1st Number.");
        int num,num1;
        num=in.nextInt();
        System.out.println("Enter 2nd Number.");
        num1=in.nextInt();
        Hcf ob=new Hcf(num,num1);
        ob.hcf();
    }
}