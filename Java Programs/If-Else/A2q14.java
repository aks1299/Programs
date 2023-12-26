import java.util.*;
public class A2q14 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int a, b, c, d, e, x;
		System.out.println("Enter Marks for 1st Subject :");
		a = in.nextInt();
		System.out.println("Enter Marks for 2nd Subject :");
		b = in.nextInt();
		System.out.println("Enter Marks for 3rd Subject :");
		c = in.nextInt();
		System.out.println("Enter Marks for 4th Subject :");
		d = in.nextInt();
		System.out.println("Enter Marks for 5th Subject :");
		e = in.nextInt();
		x = (a+b+c+d+e)/5;
		if(x >= 60 )
		{
			System.out.println("First Division");
		}
		else if(x >= 45 )
		{
			System.out.println("Second Division");
		}
		else if(x >= 30)
		{
			System.out.println("Third Division");
		}
		else
		{
			System.out.println("Fail");
		}
	}

}
