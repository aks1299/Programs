import java.util.Scanner;
public class A2q1 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("Enter Sales : ");
		int s;
		s=in.nextInt();
		if(s >= 90000)
		{
			System.out.println("You will get commission : ");
		}
		else
		{
			System.out.println("You will not get commission : ");
		}
	}

}
