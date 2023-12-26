import java.util.*;
public class psOne
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        int a[]=new int[10];
        int even[]=new int[10];
        int odd[]=new int[10];
        int e=0,o=0;
        for(int i=0;i<10;i++)
        {
            System.out.println("Enter element: ");
            a[i]=in.nextInt();
            if((a[i]%2)==0)
            {
                even[e++]=a[i];
            }
            else
            {
                odd[o++]=a[i];
            }
        }
        System.out.println();
        for(int i=0;i<even.length;i++)
        {
            if(even[i]!=0)
            {
                System.out.print(even[i]+" ");
            }
        }
        System.out.println();
        for(int i=0;i<odd.length;i++)
        {
            if(odd[i]!=0)
            {
                System.out.println(odd[i]+" ");
            }
        }
        in.close();
    }
}