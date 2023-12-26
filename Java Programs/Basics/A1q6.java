import java.util.Scanner;
public class A1q6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		System.out.println("Enter values of the two resistances:  ");
		double a = in.nextDouble();
		double b = in.nextDouble();
		double Rs = a+b;
		double Rp = (b*a)/(b+a);
		System.out.println("The Resistance in series is: "+Rs);
		System.out.println("The Resitance in Parallel is: "+Rp);
	}
}