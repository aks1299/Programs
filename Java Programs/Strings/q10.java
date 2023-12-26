import java.util.*;
class q10
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        int c,i,l;
        l=s.length();
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            if(x==' ')
            {
                --l;
            }
        }
        System.out.print("New length= "+l);
    }
}