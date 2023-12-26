import java.util.*;
public class A2q12 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int w;
		System.out.println("Enter weight ");
		w=in.nextInt();
		if(w < 40)
		{
			System.out.println("Under Weight");
		}
		else if(w >= 40 && w <= 80)
		{
			System.out.println("Normal Weigth");
		}
		else if(w < 80)
		{
			System.out.println("Over Weight");
		}
		else
		{
			System.out.println("Invalid Weight");
		}
	}

}
