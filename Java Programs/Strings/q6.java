import java.util.*;
class q6
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        int n,i,c=0,l,j;
        char s1=' ';
        String s2="";
        l=s.length();
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            if(x=='z' || x=='Z')
            {
               s1='A';
               s2=s2+s1;
            }
            else
            {
                s1=++x;
                s2=s2+s1;
            }
        }
        System.out.println(s2);
    }
}