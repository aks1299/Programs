import java.util.Scanner;
public class A1q5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Marks for the three subjects ");
		double a = in.nextDouble();
		double b = in.nextDouble();
		double c = in.nextDouble();
		double t = a+b+c;
		double avg = t/3;
		System.out.println("The total marks of the student is: "+t);
		System.out.println("The average marks of the student is: "+avg);
	}
}