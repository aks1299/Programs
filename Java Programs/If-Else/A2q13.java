import java.util.*;
public class A2q13 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int a;
		System.out.println("Enter Tempreature");
		a=in.nextInt();
		if(a<20)
			System.out.println("Cold Day");
		else if(a>=20 && a<=40)
			System.out.println("Normal Day");
		else if(a>40)
			System.out.println("Hot Day");
		else
			System.out.println("Invalid");
	}

}
