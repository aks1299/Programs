import java.util.*;
class q4
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        int n,i,c=0,l;
        String s1=s+" ";
        l=s1.length();
        for(i=0;i<l;i++)
        {
            char x=s1.charAt(i);
            if(x==' ')
            {
                if(s.charAt(i-1)=='a' || s.charAt(i-1)=='e' || s.charAt(i-1)=='i' || s.charAt(i-1)=='o' || s.charAt(i-1)=='u')
                {
                    c++;
                }
            }
        }
        System.out.println("The number of words that end with vowels are "+c);
    }
}