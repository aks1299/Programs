import java.util.*;
public class DOB {
	int dd,mm,yyyy;
	void setDob()
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter Date of birth : ");
		dd=in.nextInt();
		System.out.println("Enter Month of birth : ");
		mm=in.nextInt();
		System.out.println("Enter Year of birth : ");
		yyyy=in.nextInt();
		in.close();
	}
	public static void main(String[] args) {
		DOB ob=new DOB();
		DOB bc=new DOB();
		ob.setDob();
		bc.setDob();
		if(ob.yyyy>bc.yyyy)
		{
			System.out.println("1st is younger.");
		}
		else if(ob.yyyy<bc.yyyy)
		{
			System.out.println("2nd is younger.");
		}
		else
		{
			if(ob.mm>bc.mm)
			{
				System.out.println("1st is younger.");
			}
			else if(ob.mm<bc.mm)
			{
				System.out.println("2nd is younger . ");
			}
			else
			{
				if(ob.dd>bc.dd)
				{
					System.out.println("1st person is younger.");
				}
				else if(ob.dd<bc.dd)
				{
					System.out.println("The 2nd person is younger.");
				}
				else
				{
					System.out.println("Same day.");
				}
			}
		}
		
	}

}
