import java.util.Scanner;
public class A1q14 {

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Height of Ladder : ");
		double a = in.nextDouble();
		System.out.println("Enter Angle of elevation : ");
		double x = in.nextDouble();
		double b = a/Math.sin(x);
		double sin=Math.sin(x);
		//System.out.println(sin);
		System.out.println("The Height of the wall is "+b);
	}
}