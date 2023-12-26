import java.util.Scanner;
class sum
{
    public static int sum20(int a)
    {
        int i,s=0,j,s1=0,n;
        n=a;
        for(i=1;i<=n;i++)
        {
            s1=s1+s;
            for(j=1;j<=i;j++)
            {
                s=s+j;
            }
        }
        return s1;
    }
    public static void main(String[] args)
    {
        int n,k;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Range : ");
        n=in.nextInt();
        sum ob=new sum();
        k=ob.sum20(n);
        System.out.println("The Sum is : "+k);
    }
}