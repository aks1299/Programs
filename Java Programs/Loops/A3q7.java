import java.util.*;
public class A3q7
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter number : ");
        int x,i,j,n1,n2,r1,r2,c;
        x=in.nextInt();
        for(i=0;i<10;i++)
        {
            j=x;
            while(j>0)
            {
                r1 = j%10;
                if(r1==i)
                {
                    System.out.print(r1);
                }
                j=j/10;
            }
        }
    }
}