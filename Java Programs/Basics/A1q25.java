import java.util.Scanner;
public class A1q25 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		double p, r, t ,ci ;
		System.out.println("Enter Principal Amount : ");
		p = in.nextDouble();
		System.out.println("Enter rate percentage : ");
		r = in.nextDouble();
		System.out.println("Enter Time period : ");
		t=in.nextDouble();
		ci=p*(Math.pow(1+(r/100),t)-1);
		System.out.println("The Compound interest is : "+ci);
	}

}
