import java.util.*;
public class A2q15 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int a, b, c, s, max=0;
		System.out.println("Enter The three angles of the triangle : ");
		a = in.nextInt();
		b = in.nextInt();
		c = in.nextInt();
		s = a+b+c;
		if ( s == 180 )
		{
			if(a > b && a > c)
				max = a;
			else if(b > a && b > c)
				max=b;
			else
				max=c;
			System.out.println("The maximum angle is : "+max);
		}
		else
		{
			System.out.println("Invalid sest of agles");
		}
	}

}
