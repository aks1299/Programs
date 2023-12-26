import java.util.*;
class q28
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter first word.");
        String s1=in.nextLine();
        System.out.println("Enter second word.");
        String s2=in.nextLine();
        int c=0,i,l1,l2,max,min,j;
        l1=s1.length();
        l2=s2.length();
        String shuffle="";
        if(l1>l2)
        {
            max=l1;
        }
        else
        {
            max=l2;
        }
        if(max==l1)
        {
            for(i=0;i<l1;i++)
            {
                char x=s1.charAt(i);
                for(j=0;j<l2;j++)
                {
                    char y=s2.charAt(j);
                    shuffle=y+x;
                }
            }
        }
        else
        {
            
        }
    }
}