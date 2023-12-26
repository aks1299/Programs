import java.util.Scanner;
class swap
{
    public static void swap(int a,int b)
    {
        int c;
        c=a;
        a=b;
        b=c;
        System.out.println(" A = "+a);
        System.out.println(" B = "+b);
    }
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        int n1,n2,k;
        System.out.println("Enter 1st Number : ");
        n1=in.nextInt();
        System.out.println("Enter 2nd Number : ");
        n2=in.nextInt();
        swap ob=new swap();
        ob.swap(n1,n2);
    }
}