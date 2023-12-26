import java.util.*;
class q14
{
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        int a[]=new int[5];
        int n,i,j,t;
        for(i=0;i<5;i++)
        {
            System.out.println("Enter number.");
            a[i]=in.nextInt();
        }
        for(i=0;i<4;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(a[i]>a[j])
                {
                   t = a[i];
                   a[i] = a[j];
                   a[j] = t;
                }
            }
            
        }
        System.out.println("Arrays in ascending order :\n");
        for(i=0;i<5;i++)
        {
            System.out.println(a[i]);
        }
    }
}