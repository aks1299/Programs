import java.util.*;
class q29
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        s=s+" ";
        String s1="";
        String s2="";
        int i,l,wl,j;
        l=s.length();
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            if(x!=' ')
            {
                s1=s1+x;    
            }
            else
            {
                wl=s1.length();
                for(j=0;j<wl;j++)
                {
                    char y=s1.charAt(j);
                    s2=s2+y;
                }
                if(s1.equals(s2)==true)
                {
                    System.out.print(s2+" ");
                    s1="";
                    s2="";
                }
            }
            
        }
    }
}