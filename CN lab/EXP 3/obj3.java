class A extends Thread {
	Result r;
	int a,b,c;
	public A(Result r,int a,int b)
	{
		this.r=r;
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
		c=a+b;
		r.retutrn_fun(c);
	}
}
class Result {
	public void retutrn_fun(int a) 
	{
		System.out.println(a);
	}

}
public class obj3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Result r=new Result();
		A t1=new A(r,1,2);
		t1.start();
		try {
			t1.join();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("Now this thread is executig after the main thread");
	}
}
