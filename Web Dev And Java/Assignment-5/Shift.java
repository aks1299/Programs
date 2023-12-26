public class Shift {

	public static void main(String[] args) {
		String str="The book is on the table which is brown.";
		String[] out=str.split(" ");
		for(int i=0;i<out.length;i++)
		{
			System.out.println(out[i]);
		}
	}

}
