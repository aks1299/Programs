import java.util.*;
class q7
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
            else
            {
                s3=s3+x;
            }
        }
        System.out.println(s3);
    }
}