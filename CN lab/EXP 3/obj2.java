class A extends Thread {
	int a,b;
	public A(int a,int b)
	{
		this.a=a;
		this.b=b;
	}
	public void run()
	{
		try {
			System.out.println("The class A is executing");
			Thread.sleep(200);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}
public class obj2 {
    public static void main(String[] args) {
		// TODO Auto-generated method stub
		A t1=new A(1,2);
		t1.start();
		System.out.println("The next line after object calling");
	}
}
