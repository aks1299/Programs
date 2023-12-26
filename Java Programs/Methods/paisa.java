import java.util.*;
class paisa
{
    public static void rupees(int a)
    {
        int r,p1;
        r = a/100;
        p1 = a%100;
        System.out.println("Rupees : "+r+" and "+p1+" paise ");
    }
    public static void main(String[] args)
    {
         int p,k;
         Scanner in=new Scanner(System.in);
         p=in.nextInt();
         paisa ob=new paisa();
         ob.rupees(p);
    }
}