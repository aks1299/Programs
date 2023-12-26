import java.util.Scanner;
public class A1q3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		System.out.println("Enter radius of circle ");
		int r=in.nextInt();
		double a=3.142*(Math.pow(r,2));
		System.out.println("The Area of the circle is: "+a);
	}

}
