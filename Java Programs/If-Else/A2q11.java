import java.util.*;
public class A2q11 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in =  new Scanner(System.in);
		int a, b;
		System.out.println("Enter Age : ");
		a = in.nextInt();
		System.out.println("Enter Salary : ");
		b = in.nextInt();
		if(a >= 30 || b >= 10000)
		{
			System.out.println("You can be insured");
		}
		else
		{
			System.out.println("You can not be insured");
		}
	}

}
