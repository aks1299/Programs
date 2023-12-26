import java.util.*;
class q32
{
    public static void main(String[] args) 
    {
	String s, r = "";
	String a[];
	Scanner in=new Scanner(System.in);
	System.out.print("Enter your sentence: "); 
	s=in.nextLine().toLowerCase();
	a=s.split(" ");
	for(int i=0; i<a.length; i++) 
	{
		for(int j=i+1; j<a.length; j++)
		{
			if(a[i].equals(a[j])) 
			{
				a[j] = "remove";
			}
		}
	}
	for(String word: a) 
	{
		if(word != "remove") 
		{
			r=r+word+" ";
		}
	}
	System.out.println("Sentence after removing duplicate words: " + r);  
    }
}
  