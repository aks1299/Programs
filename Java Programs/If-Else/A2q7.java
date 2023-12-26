import java.util.Scanner;
public class A2q7  {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a, b, c;
		System.out.println("Enter Number");
		a =in.nextInt();
		if((a % 2) == 0)
		{
			System.out.println("The number is even ");
		}
		else
		{
			if((a%7) == 0)
			System.out.println("The number is odd and divisible by seven ");
			else
				System.out.println("The number is odd");
		}
	}

}
