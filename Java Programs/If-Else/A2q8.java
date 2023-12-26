import java.util.Scanner;
public class A2q8   {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int sp, cp, p;
		System.out.println("Enter Cost price : ");
		cp=in.nextInt();
		System.out.println("Enter Selling price : ");
		sp=in.nextInt();
		
		if((sp-cp) > 0)
		{
			System.out.println("The owner has gained profit.");
		}
		else if((sp-cp)==0)
		{
			System.out.println("The owner gained nothing.");
		}
		else
		{
			System.out.println("The owner had a loss.");
		}
	}

}
