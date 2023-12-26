import java.util.*;
public class A1q17 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("Enter ");
		double c = in.nextDouble();
		double m = Math.round(c/100);
		double cr = c-(m*100);
		System.out.println("The length in meters is "+m+" meters and "+cr+" centimeters ");
	}

}
