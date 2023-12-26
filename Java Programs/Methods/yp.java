import java.util.*;
class yp
{
    public static void xy(int p)
    {
        for(int i=1;i<=p;i++)
        {
            int yp,x,y;
            yp=1+i+((i*i)/2)+((i*i*i)/6);
            x=5+yp+2*(yp*yp);
            y=5-yp-2*(yp*yp);
            System.out.println("YP = "+yp);
            System.out.println("X = "+x);
            System.out.println("Y = "+y);
        }
    }
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Range : ");
        int ip=in.nextInt();
        yp ob=new yp();
        ob.xy(ip);
    }
}