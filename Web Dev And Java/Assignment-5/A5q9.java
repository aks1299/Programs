import java.util.Scanner;
public class A5q9 {
	static void encode(String s) {
		int n=s.length();
		int en=0;
		int c;
		char ch[]=new char[n];
		for(int i=0;i<n;i++) {
			ch[i]=s.charAt(i);
			c=(int)ch[i]-64;
			en=en+c;
		}
		System.out.println(s+" is encoded to "+en);
	}

	public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
		System.out.println("Enter the spreadsheet value");
		String st=sc.next();
		encode(st);
		sc.close();

	}

}
