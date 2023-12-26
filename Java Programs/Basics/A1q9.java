import java.util.Scanner;
public class A1q9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		System.out.println("Enter time in hours:");
		double a = in.nextDouble();
		double b = 60*a;
		double c = 3600*a;
		System.out.println("The time in Minutes is: "+b);
		System.out.println("The time in Seconds is: "+c);
	}
}