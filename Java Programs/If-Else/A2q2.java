import java.util.Scanner;
public class A2q2 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("Enter Age : ");
		int s, e;
		s=in.nextInt();
		if(s >= 18)
		{
			System.out.println("You can Vote : ");
		}
		else
		{
			e= 18-s;
			System.out.println("You cannot vote, you have to wait "+e+" years, to vote. ");
		}
	}

}
