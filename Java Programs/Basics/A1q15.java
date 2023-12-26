import java.util.Scanner;
public class A1q15 {

	public static void main(String[] args) {
		Scanner in = new Scanner (System.in);
		System.out.println("Enter the length of the dress : ");
		double l=in.nextDouble();
		double a=Math.round(l/3);
		System.out.println("The no. of dresses that can be produced from "+l+" meters of cloth "+" is "+a);
	}

}
