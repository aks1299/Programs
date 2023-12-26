import java.util.*;
class q10
{
    static void main()
    {
        Scanner in=new Scanner(System.in);
        int a[]=new int[5];
        int max=0,i,j;
        for(i=0;i<5;i++)
        {
            System.out.println("Enter Number:");
            a[i]=in.nextInt();
        }
        for(j=0;j<5;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
            }
        }
        System.out.println("The Maximum Value in thhe array is:"+max);
    }
}