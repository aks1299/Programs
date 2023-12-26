import java.util.Scanner;
public class A1q4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Radius of Circle; ");
		double r=in.nextDouble();
		double a=3.142*(Math.pow(r,2));
		double p=2*3.142*r;
		System.out.println("The area of the circle is: "+a);
		System.out.println("the Perimeter of the circle is: "+p);
		
	}

}
