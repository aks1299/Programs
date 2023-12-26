import java.util.*;
class q12
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        int c=0,i,l;
        l=s.length();
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            if(x >= 32 && x<=47)
            {
                c++;
            }
            else if(x>=58 && x<=64)
            {
                c++;    
            }
            else if(x>=91 && x<=96 )
            {
                c++;
            }
            else if(x>=123 && x<=126)
            {
                c++;
            }
        }
        System.out.println("The number of special characters is. "+c);
    }
}