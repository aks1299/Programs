class A extends Thread {
	public void run()
	{
		try {
			for(int i=1;i<=5;i++)
			{
			System.out.println("A");
			Thread.sleep(100);
			}
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
class B extends Thread {
	public void run()
	{
		for(int i=1;i<=5;i++) System.out.println("B");
	}
}
public class obj1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		A t1=new A();
		B t2=new B();
		t1.start();
		t2.start();

	}

}
