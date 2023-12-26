import java.util.Scanner;
public class A3q10
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Range : ");
        int x,i,r,s=0,n1;
        x=in.nextInt();
        for(i=0;i<=x;i++)
        {
            n1=i;
            while(n1 > 0)
            {
                r = n1 % 10;
                s = s + r;
                if(n1/10==0 && s>=10)
                {
                    n1 = s*10;
                    s = 0 ;
                }
                else if(n1/10==0 && s<10)
                {
                    break;
                }
            
                n1 = n1 / 10;
            }   
            if(s==1)
            {
                System.out.println(i+" is a magic number");
            }
            else
            {
                System.out.println(i+" is not a magic number");
            }
        }
    }
}