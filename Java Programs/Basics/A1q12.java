import java.util.Scanner;
public class A1q12 {

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Distance in yards : ");
		double a = in.nextDouble();
		double b = a/1.1;
		double c = a/1100;
		System.out.println("The Distance in meters is"+b);
		System.out.println("The Distance in Kilometers is"+c);
	}
}