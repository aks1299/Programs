import java.util.Scanner;
class alpha
{
    public static char fivem(char a)
    {
        int k=(int)a;
        k=k-5;
        a=(char)k;
        return a;
    }
    public static void main(String[] args)
    {
        char x,y;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Character : ");
        x=in.next().charAt(0);
        alpha ob=new alpha();
        y=ob.fivem(x);
        System.out.println(y);
    }
}