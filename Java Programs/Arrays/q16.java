import java.util.*;
class q16
{
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        int a[]=new int[5];
        int n,i,j=0;
        System.out.println("Enter Number to be searched.");
        n=in.nextInt();
        for(i=0;i<5;i++)
        {
            System.out.println("Enter Number");
            a[i]=in.nextInt();
        }
        for(i=0;i<4;i++)
        {
            if(a[i]==n)
            {
                j=1;
                System.out.println("The number is present in the Array.");
                break;
            }
            else
            {
                j=0;
                System.out.println("The number is not present in the Array.");
            }
        }
        if(j==1)
        {
            
        }
        else
        {
            System.out.println("The number is not present in the array.");
        }
    }
}