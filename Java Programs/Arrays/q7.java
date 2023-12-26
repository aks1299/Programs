import java.util.*;
class q7
{
    static void main()
    {
        Scanner in=new Scanner(System.in);
        int a[]=new int[5];
        int b[]=new int[5];
        int c[]=new int[5];
        int i,j,k;
        for(i=0;i<=4;i++)
        {
            System.out.println("Enter Number.");
            a[i]=in.nextInt();
            for(k=4;k>-1;k--)
            {
                System.out.println("Enter Number.");
                b[k]=in.nextInt();
                c[i]=a[i]+b[k];
            }
        }
        for(j=0;j<=4;j++)
        {
            System.out.println("The Sum of the 2 elements is="+c[j]);
        }
    }
}