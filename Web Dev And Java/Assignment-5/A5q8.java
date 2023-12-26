import java.util.Scanner;
public class A5q8 {
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter First Number : ");
        int a=in.nextInt();
        System.out.println("Enter Second Number : ");
        int b=in.nextInt();
        int c=a+b;
        System.out.println("Sum = "+c);
        in.close();
    }
}
