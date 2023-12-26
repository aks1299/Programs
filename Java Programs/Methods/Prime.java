import java.util.Scanner;
class Prime
{
    public static int primecheck(int n)
    {
        int i,c=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            return(1);
        }
        else
        {
            return(0);
        }
    }
    public static void main(String[] args)
    {
        Scanner in =new Scanner(System.in);
        int num,k;
        System.out.println("Enter any number");
        num=in.nextInt();
        Prime ob=new Prime();
        k=ob.primecheck(num);
        if(k==1)
        {
            System.out.println("Prime");
        }
        else
        {
            System.out.println("Not a prime");
        }
    }
}
 