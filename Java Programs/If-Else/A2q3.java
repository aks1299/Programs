import java.util.Scanner;
public class A2q3   {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a, b, c;
		System.out.println("Enter Marks for 1st Subject : ");
		a =in.nextInt();
		System.out.println("Enter Marks for 1st Subject : ");
		b =in.nextInt();
		System.out.println("Enter Marks for 1st Subject : ");
		c =in.nextInt();
		if((a+b+c) >= 180)
		{
			System.out.println("You have passed : ");
		}
		else
		{
			System.out.println("You have failed : ");
		}
	}

}
