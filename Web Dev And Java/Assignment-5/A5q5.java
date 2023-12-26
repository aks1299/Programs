import java.util.Scanner;
public class A5q5 {
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Word : ");
        String s=in.nextLine();
        StringBuffer ob=new StringBuffer(s);
        System.out.println(ob.reverse());
    }
}
