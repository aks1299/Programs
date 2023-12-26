import java.util.Scanner;
public class A2q9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int a, b;
		System.out.println("Enter Number drawn by 1st Person.");
		a = in.nextInt();
		System.out.println("Enter Number drawn by 2nd Person.");
		b = in.nextInt();
		if(a==6 && a>=1)
		{
			System.out.println("The first person has won.");
		}
		else if(b==6 && b>=1)
		{
			System.out.println("The second person has won.");
		}
		else
		{
			System.out.println("Invalid Input ");
		}
	}

}
