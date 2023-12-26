import java.util.*;
class q9
{
    static void main()
    {
        Scanner in=new Scanner(System.in);
        int a[]=new int[5];
        int i,j,k;
        for(i=0;i<=4;i++)
        {
            System.out.println("Enter number.");
            a[i]=in.nextInt();
        }
        for(k=0;k<=4;k++)
        {
            if(a[k]%2!=0)
            {         
                System.out.println(a[k]);
            }
        }
        for(j=0;j<=4;j++)
        {
            if(a[j]%2==0)
            {
                System.out.println(a[j]);
            }
        }
    }
}