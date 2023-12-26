public class A5q1 {
	int c=0;
	int countbits(int a)
	{
		if(a==0)
		{
			return c;
		}
		else
		{
			c++;
			return countbits(a>>1);
		}
	}
	public static void main(String[] args) {
		A5q1 ob=new A5q1();
		int b=ob.countbits(33);
		System.out.println(b);
	}

}
