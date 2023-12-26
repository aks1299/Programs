import java.util.*;
public class A2q10 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int age , sal;
		System.out.println("Enter age : ");
		age = in.nextInt();
		System.out.println("Enter Salary : ");
		sal = in.nextInt();
		if(age >= 58 || sal >= 25000)
		{
			System.out.println("You have to retire ");
		}
		else
		{
			System.out.println("You do not have to retire ");
		}
		
	}

}
