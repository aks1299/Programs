import java.util.*;
class q14
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        String s1="";
        int i,l;
        l=s.length();
        for(i=l-1;i>=0;i--)
        {
            char x=s.charAt(i);
            s1=s1+x;
        }
        boolean b=s.equals(s1);
        if(b==true)
        {
            System.out.println("Palindrome.");
        }
        else
        {
            System.out.println("Not a Palindrome.");
        }
    }
}