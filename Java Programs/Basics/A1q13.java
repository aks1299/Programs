import java.util.Scanner;
public class A1q13 {

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Height of wall : ");
		double a = in.nextDouble();
		System.out.println("Enter Angle of elevation : ");
		double x = in.nextDouble();
		double b = a/Math.sin(x);
		System.out.println("The Height of the ladder is "+b);
	}
}