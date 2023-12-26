import java.util.*;
public class A1q19 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("Enter value of money withdrawn : ");
		int a, b, c;
		a = in.nextInt();
		b = a / 10;
		c = a % 10;
		System.out.println("The number of rs. 10 notes is : "+b);
		System.out.println("The number of rs. 1 notes is : "+c);
		
	}

}
 