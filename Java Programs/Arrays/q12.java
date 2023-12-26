import java.util.*;
class q12
{
    static void main()
    {
        Scanner in=new Scanner(System.in);
        int a[]=new int[7];
        int max=0,min=0,i,j,k;
        for(i=0;i<7;i++)
        {
            System.out.println("Enter Number:");
            a[i]=in.nextInt();
        }
        for(j=0;j<7;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
            }
        }
        min=a[0];
        for(k=0;k<7;k++)
        {
            if(a[k]<min)
            {
                min=a[k];
            }
        }
        int s=max-min;
        System.out.println("Max = "+max);
        System.out.println("Min = "+min);
        System.out.println("Difference = "+s);
    }
}