import java.util.*;
class q4
{
    static void main()
    {
        Scanner in=new Scanner(System.in);
        int s=0,i,j;
        int a[]=new int[5];
        for(i=0;i<=4;i++)
        {
            System.out.println("Enter number : ");
            a[i]=in.nextInt();
        }
        for(j=0;j<=4;j++)
        {
            if(a[j]%2!=0)
            {
                s=s+a[j];    
            }
        }
        System.out.println("The Sum of odd numbers is : "+s);
    }
}