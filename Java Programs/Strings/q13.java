import java.util.*;
class q13
{
    public static void main(String[] args)
    {
         Scanner in=new Scanner(System.in);
         System.out.println("Enter Sentence.");
         String s=in.nextLine();
         System.out.println("Enter Sentence.");
         String s1=in.nextLine();
         int c,c1,i,l2,l1;
         l1=s.length();
         l2=s1.length();
         for(i=0;i<l1;i++)
         {
             char x=s.charAt(i);
             if(x==' ')
             {
                 --l1;
             }
         }
         for(i=0;i<l2;i++)
         {
             char x=s1.charAt(i);
             if(x==' ')
             {
                 --l2;
             }
         }
         if(l1==l2)
         {
             System.out.println("Both strings have equal number of characters");
         }
         else
         {
             System.out.println("Both strings do not have equal number of characters");
         }
    }
}