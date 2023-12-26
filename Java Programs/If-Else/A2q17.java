import java.util.*;
public class A2q17 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		double u, b, c, d ;
		System.out.println("Enter no. of units : ");
		u = in.nextDouble();
		if(u > 100)
		{
			b = u-100;
			c = b * 2.5;
			d = 700+c;
			System.out.println("Your bill is "+d);
		}
		else
		{
			System.out.println("Your bill is 450. ");
		}
	}

}
