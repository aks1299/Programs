import java.util.Scanner;
public class A3q6  
{

    public static void main(String[] args) 
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Range:");
        int x,n1,n2,c,r1,r2,i,j=0,count=0;
        x=in.nextInt();
        n1=x;
        n2=x;
        c=0;    
        for(i=1;i<=x;i++)
        {
            c=0;
            n1=i;
            while(n1>0)
            {
                r1=n1%10;
                n2=n1/10;
                while(n2>0)
                {
                    r2=n2%10;
                    if(r1==r2)
                    {
                        c=1;
                    }
                    n2=n2/10;
                }
                n1=n1/10;
            }
            if(c==0)
            {
                count=0;
                for(j=2; j<i; j++)
                {
                    if(i%j==0)
                    {
                       count++;
                       break;
                    }                   
                }
                if(count==0)
                {
                    System.out.println(j+" yes ");
                    
                }
            }
            else 
            {
                System.out.println(i+" Is not a unique number.");
            }
        }
    }
}
