import java.util.*;
public class A1q18 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("Enter values of a, b, and c : ");
		double a, b, c, x1, x2;
		a=in.nextDouble();
		b=in.nextDouble();
		c=in.nextDouble();
		x1=(-b + Math.sqrt((b*b-4*a*c)/(2*a)));
		x2=(-b - Math.sqrt((b*b-4*a*c)/(2*a)));
		System.out.println("The two roots are : "+x1+" and "+x2);
	}

}
 