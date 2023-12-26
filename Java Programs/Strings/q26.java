import java.util.*;
class q26
{
    static int l;
    public static void main(String args[]) 
     {
         Scanner in=new Scanner(System.in);
         System.out.print("Enter a word : ");
         String s=in.nextLine();
         q26 ob= new q26();
         ob.sortdesc(s);
     }
     public static void sortdesc(String s)
     {
         l=s.length();
         char b[] = new char[l];
         for(int i=0;i<l;i++)
         {
             b[i] = s.charAt(i);    
         }
         char t;
         for(int j=0;j<l-1;j++)
         {
              for(int k=0;k<l-1-j;k++)
              {
                   if(b[k]<b[k+1])
                   {
                        t=b[k+1];
                        b[k+1]=b[k];
                        b[k]=t;
                    }
                }
            }
         System.out.print("Sorted word : ");
         for(int m=0;m<l;m++)
         {
             System.out.print(b[m]);    
         }
         System.out.print("\n");
    }
}
