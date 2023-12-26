import java.util.*;
class q9
{
    public static void main(String [] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        s = s + " ";
        int i =0;
        while(s.charAt(i)!=' ')
        {
            i++;
        }
        System.out.println("Number of characters = "+i);
    }
}