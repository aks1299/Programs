import java.util.*;
class q8
{
    static void main()
    {
        Scanner in=new Scanner(System.in);
        int a[]=new int[5];
        int i,j;
        for(i=0;i<5;i++)
        {
            System.out.println("Enter Number: ");
            a[i]=in.nextInt();
        }
        for(j=0;j<5;j++)
        {
            if(a[j]%2!=0)
            {
                System.out.println("The position is."+j);
            }
        }
    }
}