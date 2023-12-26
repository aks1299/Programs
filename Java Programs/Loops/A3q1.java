import java.util.*;
public class A3q1 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int a, r, s=0, m, d=0;
		System.out.println("Enter Number :");
		a = in.nextInt();
		while(a > 0)
		{
			r = a % 10;
			s = s + (r*r);
			if(a/10==0 && s>=10)
			{
				a = s*10;
				s = 0 ;
			}
			else if(a/10==0 && s<10)
			{
				break;
			}
			a = a / 10;
		}
		
		if(s==1)
			System.out.println("Happy number");
		else
			System.out.println("Not a Happy number");
	}

}
