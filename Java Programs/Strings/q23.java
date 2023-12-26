import java.util.*;
class q23
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        int c=0,i,l;
        s=s+" ";
        l=s.length();
        String s1="";
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            if(x!=' ')
            {
                if(x=='a' || x=='e' || x=='i' || x=='o')
                {
                    c++;
                }
                s1=s1+x;
            }
            else
            {
                if(c>1)
                {
                    System.out.print(s1+" ");
                }
                s1="";
            }
        }
    }
}