import java.util.*;
class q17
{
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        int c,i,j,l;
        char s1=' ';
        String s2=s;
        l=s2.length();
        String s3="";
        char s4=' ';
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            if(x>=65 && x<=90)
            {
                for(j=1;j<33;j++)
                {
                    s1=++x;    
                }
                s3=s3+s1;
            }
            else if(x>=97 && x<=122)
            {
                for(j=0;j<32;j++)
                {
                    s4=--x;
                }
                s3=s3+s4;
            }
        }
        System.out.println(s3);
    }
}