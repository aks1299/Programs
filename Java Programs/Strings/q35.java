import java.util.*;
class q35
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();;
        int c=0,i,l,j;
        s=s+" ";
        l=s.length();
        int z=0;
        String n[] = new String[l];
        String s1="";
        String t;
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            if(x!=' ')
            {
                s1=s1+x;
            }
            else
            { 
                n[z++]=s1;
                s1 = "";
            }
        }
        for (i = 0; i < z-1; i++) 
        {
            for ( j = i + 1; j < z; j++) 
            {
                if (n[i].compareTo(n[j])>0) 
                {
                    t = n[i];
                    n[i] = n[j];
                    n[j] = t;
                }
            }
        }
        for(i=0;i<z;i++)
        {
            System.out.print(n[i]+" ");
        }
    }
}