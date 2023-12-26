import java.util.*;
public class A3q5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Number : ");
		int x=in.nextInt();
		System.out.println(x);
		int n1=x;
		int n2=x;
		int c=0;
		while(n1>0)
		{
			int r1=n1%10;
			n2=n1/10;
			while(n2>0)
			{
				int r2=n2%10;
				if(r1==r2)
				{
					c=1;
				}
				
				n2=n2/10;
			}
			n1=n1/10;
		}
		if(c==0)
		{
			System.out.println("unique number.");		
		}
		else 
		{
			System.out.println("not a unique number.");
		}
	}

}
