import java.util.*;
class q11
{
    static void main()
    {
        Scanner in=new Scanner(System.in);
        int a[]=new int[7];
        int min=0,i,j;
        for(i=0;i<7;i++)
        {
            System.out.println("Enter Temperature:");
            a[i]=in.nextInt();
        }
        min=a[0];
        for(j=0;j<7;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
            }
        }
        System.out.println("The Maximum Value in thhe array is:"+min);
    }
}