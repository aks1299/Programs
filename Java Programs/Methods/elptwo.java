import java.util.*;
class elptwo
{
    public static void series(int m)
    {
        int a,b=11,i;
        a=m;
        for(i=0;i<=5;i++)
        {
            System.out.print(a+" ");
            a=a+b;
            b=b+2;
        }
    }
    public static void main(String[] args)
    {
        int st;
        Scanner in=new Scanner (System.in);
        System.out.println("Enter Number : ");
        st=24;
        elptwo ob=new elptwo();
        ob.series(st);
    }
}