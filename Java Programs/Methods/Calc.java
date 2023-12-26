import java.util.Scanner;
class Calc
{
    public static int add(int a, int b)
    {
        return a+b;
    }
    public static int sub(int a, int b)
    {
        return a-b;
    }
    public static int mul(int a, int b)
    {
        return a*b;
    }
    public static int div(int a, int b)
    {
        return a/b;
    }
    public static int rem(int a, int b)
    {
        return a%b;
    }
    public static int sqrt(int a)
    {
        if(a>0)
        {
            return (int)Math.pow(a,0.5);   
        }
        else
        {
            return -1;
        }
    }
    public static void main(String [] args)
    {
        int n=1;
        while(n>0)
        {
            if(n==1)
            {
            int n1,n2,k,x;
            Scanner in=new Scanner(System.in);
            System.out.println("1-Add");
            System.out.println("2-Sub");
            System.out.println("3-Mul");
            System.out.println("4-Div");
            System.out.println("5-Rem");
            System.out.println("6-Sqrt");
            System.out.println("7-Exit.");
            System.out.println("Enter your choice of operation.");
            x=in.nextInt();
            System.out.println("Enter 1st number : ");
            n1=in.nextInt();
            System.out.println("Enter 2nd number : ");
            n2=in.nextInt();
            switch(x){
                case 1:
                    k=add(n1,n2);
                    System.out.println("The Sum is : "+k);
                    break;
                case 2:
                    k=sub(n1,n2);
                    System.out.println("The Diff is : "+k);
                    break;
                case 3: 
                    k=mul(n1,n2);
                    System.out.println("The Product is : "+k);
                    break;
                case 4:
                    k=div(n1,n2);
                    System.out.println("The Quotient is : "+k);
                    break;
                case 5:
                    k=rem(n1,n2);
                    System.out.println("The Remainder is : "+k);
                    break;
                case 6:
                    k=sqrt(n1);
                    System.out.println("The Square root is : "+k);
                    break;
                case 7:
                    n=0;                
            }
            }
        }
    }
}