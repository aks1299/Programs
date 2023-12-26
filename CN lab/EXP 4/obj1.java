import java.util.*;
import java.net.*;
public class obj1 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		try
		{
			System.out.println("Enter the website = ");
			String str=sc.nextLine();
			InetAddress name=InetAddress.getByName(str);
			System.out.println("The IP Adddress is = "+name);
		}
		catch(UnknownHostException e)
		{
			System.out.println("Website not found");
		}
	}
}

