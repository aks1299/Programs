import java.util.*;
class q3
{
    static void main()
    {
        Scanner in=new Scanner(System.in);
        int s=0,i;
        int a[]=new int[5];
        for(i=0;i<5;i++)
        {
            System.out.println("Enter Number.");
            a[i]=in.nextInt();
            s=s+a[i];
        }
        System.out.println("The Sum is= "+s);
    }
}