import java.util.*;
class yx
{
    public static double caly(double m)
    {
          double k,l,t,n,p,q,r,s=0,i;
          k=2;
          l=5;
          t=7;
          n=9;
          for(i=0;i<=m;i++)
          {
              p=Math.pow(l,i);
              q=(k+p)/(t*n);
              s=s+q;
              k=k+1;
              l=l+3;
              t=t+2;
              n=n+2;
          }
          return s;
    }
    public static void main(String[] args)
    {
        double range,disp;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Range : ");
        range=in.nextDouble();
        yx ob=new yx();
        disp=ob.caly(range);
        System.out.println("Y= "+disp);
    }
}