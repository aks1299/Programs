import java.util.Scanner;
public class A5q7 {

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Full Name : ");
		String name=in.nextLine();
		System.out.println("Enter DOB : ");
		String DOB=in.nextLine();
		String[] nm=name.split(" ");
		String[] db=DOB.split("/");
		StringBuilder ob=new StringBuilder(name);
		String s=ob.substring(0,2)+db[1];
		System.out.println("Password : "+s);
		in.close();
	}
}
