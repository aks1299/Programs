import java.util.*;
class q21
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        int n,i,c=0,l,j;
        s=" "+s;
        String w="";
        char x;
        l=s.length();
        for(i=l-1;i>=0;i--)
        {
            x = s.charAt(i);
            if(x!=' ')
            {
                w=x+w;
            }
            else
            {
                c=i;
                break;
            }
            
        }
        System.out.print(w);
        for(i=0;i<c;i++)
        {
            x = s.charAt(i);
            if(x== ' ')
            {
                System.out.print(s.charAt(i+1)+" . ");
            }
        }
    }
}