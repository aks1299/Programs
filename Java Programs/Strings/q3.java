import java.util.*;
class q3
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter sentence.");
        String s=in.nextLine();
        String s1="";
        int c,i,l;
        l=s.length();
        for(i=l-1;i>=0;i--)
        {
            char x=s.charAt(i);
            s1=s1+x;
        }
        System.out.println("Reverse= "+s1);
    }
}