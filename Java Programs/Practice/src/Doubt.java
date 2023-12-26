public class Doubt {

	public static void main(String[] args) {
		Integer a[]= {1,2,3,4,5};
		Integer b[]=a;
		b[3]=8;
		a[4]=9;
		int i;
		for(i=0;i<a.length-1;i++)
		{
			a[i]=a[i]*b[i+1];
		}
		for(i=0;i<a.length;i++)
		{
			System.out.println(a[i]);
			System.out.println(a.length);
		}
	}

}
