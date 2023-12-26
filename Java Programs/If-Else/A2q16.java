import java.util.*;
public class A2q16 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int a;
		System.out.println("Enter Year : ");
		a=in.nextInt();
		if((a % 100) != 0 && (a % 4) == 0)
		{
			System.out.println("Leap Year");
		}
		else
		{
			if((a % 400) == 0)
			{
				System.out.println("Leap Year");
			}
			else
			{
				System.out.println("Not a Leap Year");
			}
		}
	}

}
