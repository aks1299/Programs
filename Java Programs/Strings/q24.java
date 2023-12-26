import java.util.*;
class q24
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        System.out.println("Enter character.");
        char a=in.next().charAt(0);
        System.out.println("Enter index value.");
        int ind=in.nextInt();
        int c=0,i,l,j;
        l=s.length();
        int x=s.indexOf(a,ind);
        System.out.println("The index value for character "+a+" after index value "+ind+" is "+x);
    }
}