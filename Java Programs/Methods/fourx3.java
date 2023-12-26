import java.util.*;
class fourx3
{
    public static int satis(int a,int b,int c,int d)
    {
        int y,z;
        y=(int)Math.pow(a,3)+(int)Math.pow(b,3)+(int)Math.pow(c,3);
        z=(int)Math.pow(d,3);
        if(y==z)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    public static void main (String[] args)
    {
        int q,w,e,r,t;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter 1st number : ");
        q=in.nextInt();
        System.out.println("Enter 2nd number : ");
        w=in.nextInt();
        System.out.println("Enter 3rd number : ");
        e=in.nextInt();
        System.out.println("Enter 4th number : ");
        r=in.nextInt();
        fourx3 ob=new fourx3();
        t=ob.satis(q,w,e,r);
        System.out.println(t);
    }
}