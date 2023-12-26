import java.util.Scanner;
public class A1q11 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Temperature in centigrade : ");
		double a = in.nextDouble();
		double b = (a*9/5)+32;
		System.out.println("The temprature in fahrenheit is : "+b);

	}
}