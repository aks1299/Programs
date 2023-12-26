import java.util.Scanner;
public class A1q24 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		double p, r, t, si ;
		System.out.println("Enter Principal amount :");
		p=in.nextDouble();
		System.out.println("Enter rate percentage :");
		r=in.nextDouble();
		System.out.println("Enter time period :");
		t=in.nextDouble();
		si=p*(1+(r*t));
		System.out.println("The Simple interest is :"+si);
	}

}
