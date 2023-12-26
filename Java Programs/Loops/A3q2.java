import java.util.*;
public class A3q2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Number : ");
		int a= in.nextInt();
		int i;
		for(i=0;i<=a;i++)
		{
			if(i*(i+1)==a)
			{
				System.out.println("Pronic Number.");
				break;
			}
			else if(i==a)
			{
				System.out.println("Not a Pronic Number.");
			}
		}
	}

}
