import java.util.Scanner;
public class A1q22 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("Enter number of books purchased : ");
		double a, b, c;
		a = in.nextInt();
		b = a*50 ;
		c = b-(b*0.1);
		System.out.println("The price of the books will be "+b);
		System.out.println("The net price of the books will be "+c);
	}

}
 