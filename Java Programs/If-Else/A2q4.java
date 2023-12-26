import java.util.Scanner;
public class A2q4   {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a, b, c;
		System.out.println("Enter Marks for 1st Subject : ");
		a =in.nextInt();
		if((a % 2) == 0)
		{
			System.out.println("The Number is even ");
		}
		else
		{
			System.out.println("The Number is odd ");
		}
	}

}
