import java.util.*;
class q18
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        int c=0,i,l,j,wl;
        s=s+" ";
        l=s.length();
        String s1="";
        String s2="";
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            if(x!=' ')
            {
                s1=x+s1;
            }
            else
            {
                System.out.print(s1+" ");
                s1="";
            }
        }
    }
}