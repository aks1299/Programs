import java.util.Scanner;
public class A1q16 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("Enter Time in seconds : ");
		double sec = in.nextDouble();
		double hrs = Math.round(sec/3600);
		double min = Math.round((sec-(hrs*3600))/60);
		System.out.println("The time is "+hrs+" Hours "+min+" Minutes");
	}

}
