import java.util.Scanner;
public class A1q26 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		double b, p, h ;
		System.out.println("Enter base value : ");
		b = in.nextDouble();
		System.out.println("Enter perpendicular value : ");
		p = in.nextDouble();
		System.out.println("Enter Time period : ");
		h=Math.pow(((p*p)+(b*b)),0.5);
		System.out.println("The Hypotenuse is : "+h);
	}

}
