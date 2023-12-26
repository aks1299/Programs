import java.util.Scanner;
class twinPrime
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
            return n;
        }
        else
        {
            return 0;
        }
    }
    public static void main(String[] args)
    {
        Scanner in =new Scanner(System.in);
        int num,num1,k,k1,k2;
        System.out.println("Enter 1st number");
        num=in.nextInt();
        System.out.println("Enter 2nd number");
        num1=in.nextInt();
        twinPrime ob=new twinPrime();
        if((num-num1)==2||(num1-num)==2)
        {
            System.out.println("Yes, the numbers are twin prime.");
            System.out.println(ob.primecheck(num));
            System.out.println(ob.primecheck(num1));
        }
    }
}
 