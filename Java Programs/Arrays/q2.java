import java.util.*;
class q2
{
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        int r,s=0,i;
        int a[]=new int[5];
        for(i=0;i<=4;i++)
        {
            System.out.println("Enter Number");
            a[i]=in.nextInt();
            s=a[0]+a[4];
        }
        System.out.print("The Sum= "+s);
    }
}