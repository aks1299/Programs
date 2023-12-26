import java.util.*;
class q20
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        int c=0,i,l,max=0,wl,j;
        s=s+" ";
        l=s.length();
        String s1="";
        String w="";
        for(i=0;i<l;i++)
         {
            char x=s.charAt(i);
            if(x!=' ')
            {
                s1=s1+x;
                wl=s1.length();
                for(j=0;j<wl;j++)
                {
                    char y=s1.charAt(j);
                    if(y=='a' || y=='e' || y=='i' || y=='o' || y=='u')
                    {
                        c++;
                    }   
                }
                if(c>max)
                {
                    max=c;
                    w=s1;
                }
                s1="";
            }
            else
            {
                c=0;
            }
         }
         System.out.println("Word = "+w);
         System.out.println("Number of vowels = "+max);
    }
}