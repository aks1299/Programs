
import java.util.*;
class Pyramid
{
    public String str;
    public int i,j,k;
    Scanner in=new Scanner(System.in);
    public Pyramid()
    {
        str="FROWN";
    }
    public void getstring()
    {
        System.out.println("Enter word. ");
        str=in.nextLine();
    }
    public void pattern()
    {
        int l=str.length();
        for(i=(l/2);i<l;i++)
        {
            System.out.print(str.charAt(i));
            for(j=i;j>=0;j--)
            {
                System.out.print(str.charAt(j));
            }
            System.out.println();
        }
    }
    public static void main()
    {
        Pyramid ob=new Pyramid();
        ob.getstring();
        ob.pattern();
    }
}