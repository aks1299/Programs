import java.io.*;
public class stringreverse
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);
        System.out.println("Example of reverse() function \n");
        String s;
        System.out.println("Enter any word ");
        s = in.readLine();
        StringBuffer w = new StringBuffer(s);        
        w.reverse();
        System.out.println("The reverse of "+s+" is "+w);
    }
}