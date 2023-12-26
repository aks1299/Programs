import java.util.Scanner;
public class A2q5   {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a, b, c;
		System.out.println("Enter Marks for 1st Subject : ");
		a =in.nextInt();
		if((a % 5) == 0)
		{
			System.out.println("The number is divisible by 5 : ");
		}
		else
		{
			System.out.println("Th number is not divisible by 5");
		}
	}

}
