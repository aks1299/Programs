import java.util.*;
class q1
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence :");
        String s=in.nextLine();
        int n,i,l,c=0;
        l=s.length();
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            if(x=='1' ||x=='2' ||x=='3' ||x=='4' ||x=='5' ||x=='6' ||x=='7' ||x=='8' ||x=='9' ||x=='0')
            {
                c++;
            }
        }
        System.out.println("The number of digits is : "+c);
    }
}