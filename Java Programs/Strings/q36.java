import java.util.*;
class q36
{
    public static void main(String [] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        int c=0,i,j,l,bc=0;
        l=s.length();
        char a[]=new char[l];
        char b[]=new char[l];
        char t;
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            a[i]=x;
        }
        for(i=0;i<l;i++)
        {
            for(j=i+1;j<l;j++)
            {
                if(a[i]>a[j])
                {
                   t = a[i];
                   a[i] = a[j];
                   a[j] = t;
                }
            }
        }
        for(i=0;i<l-1;i++)
        {
             if(a[i]!=a[i+1])
             {
                 b[bc]=a[i];
                 bc++;
             }
        }
        for(i=0;i<bc;i++)
        {
            System.out.println(b[i]);
        }
    }
}