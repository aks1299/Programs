import java.util.*;
class q33
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s1=in.nextLine();
        int i,l,l1,j,m,q;
        s1=s1+" ";
        l1=s1.length();
        String s="";
        char b[] = new char[l1];
        for(i=0;i<l1;i++)
        {
            char x=s1.charAt(i);
            if(x!=' ')
            {
                s=s+x;
            }
            else
            {
                l=s.length();
                for(q=0;q<l;q++)
                {
                     b[q] = s.charAt(q); 
                }
                char t;
                for(j=0;j<l-1;j++)
                {
                      for(int k=0;k<l-1-j;k++)
                      {
                           if(b[k]>b[k+1])
                           {
                                t=b[k];
                                b[k]=b[k+1];
                                b[k+1]=t;
                           }
                      }
                }
                System.out.print("Sorted word : ");
                for(m=0;m<l;m++)
                {
                     System.out.print(b[m]);    
                }
                s="";
                System.out.print("\n");
            }
        }
    }
}