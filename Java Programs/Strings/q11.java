import java.util.*;
class q11
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        System.out.println("Enter Character.");
        char a=in.next().charAt(0);
        int c=0,i,l;
        l=s.length();
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            if(a==x)
            {
                c++;
            }
        }
        System.out.println("Number of times "+a+" has appeared is "+c);
    }
}