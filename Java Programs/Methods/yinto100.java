import java.util.*;
class yinto100
{
    public static void yinto()
    {
        double x,y,y1,y2,y3,y4,y5,i;
        for(i=10;i<=100;i++)
        {
            x=i;
            y=Math.pow(x,6);
            y1=Math.pow(x,4);
            y2=Math.pow(x,2);
            y3=Math.pow(x,5);
            y4=Math.pow(x,3);
            y5=(y+y1+y2+10)/(y3+y4+x);
            System.out.println("Y = "+y5);
        }
    }
    public static void main(String[] args)
    {
        yinto100 ob=new yinto100();
        ob.yinto();
    }
}