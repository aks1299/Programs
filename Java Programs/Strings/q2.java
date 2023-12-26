import java.util.*;
class q2
{
    public static void main(String [] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter sentence");
        String s=in.nextLine();
        System.out.println("Enter word to be searched.");
        String w=in.nextLine();
        int l,i,c=0;
        l=s.length();
        String s1="";;
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            if(x!=' ')
            {
                s1=s1+x;
            }
            else
            {
                s1="";
            }
            boolean b=s1.equalsIgnoreCase(w);
            if(b==true)
            {
                c++;
            }
        }
        System.out.println("Number of times the word has occured is "+c);
    }
}
