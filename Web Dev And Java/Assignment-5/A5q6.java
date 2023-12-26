import java.util.Scanner;
public class A5q6 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the text = ");
		String str=sc.nextLine();
		String arr[]=str.split(" ");
		System.out.println("Number of words in the String is = "+arr.length);
	}
}
