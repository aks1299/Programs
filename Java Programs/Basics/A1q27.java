import java.util.Scanner;
public class A1q27 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		double a, x, n, r, si, ma ;
		System.out.println("Enter Monthly installment amount : ");
		x=in.nextDouble();
		System.out.println("Enter number of months : ");
		n=in.nextDouble();
		System.out.println("Enter rate : ");
		r=in.nextDouble();
		a=x*(n*(n+1))/2;
		si=(a*r)/1200;
		ma=x*n+si;
		System.out.println("The Maturity amount is : "+ma);
	}

}
