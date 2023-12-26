import java.util.Scanner;
public class A1q7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the two angles of the triangle ");
		double a = in.nextDouble();
		double b = in.nextDouble();
		double c = 180-(a+b);
		System.out.println("The third angle of the triangle is: "+c);	
	}
}