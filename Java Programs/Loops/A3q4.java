import java.util.*;
public class A3q4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Range : ");
		int x=in.nextInt();
		for(int i=1;i<=x;i=i*2)
		{
			int mer=2*i-1;
			System.out.println("The Number is : "+mer);
		}
	}

}
