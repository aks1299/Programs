import java.util.Scanner;
public class A1q20 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("Enter number of cold drinks purchased : ");
		int a, b, c;
		a = in.nextInt();
		b = a / 12 ;
		c = b % 5 ;
		System.out.println("The number of caps recieved is "+b+" and key rings recieved is "+c);
	}

}
 