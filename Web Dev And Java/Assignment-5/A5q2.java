import java.util.Scanner;
public class A5q2 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the number = ");
		long num=sc.nextLong();
		long count=0l;
		while(num>0)
		{
			if((num&1)==1)count++;
			num=num>>1;
		}
		if((count&1)==1)System.out.println("Parity is 1");
		else System.out.println("Parity is 0");
	}
}
