import java.io.*;
public class stringcapacity
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);
        System.out.println("Example of capacity() function \n");
        String s;
        System.out.println("Enter any word ");
        s = in.readLine();
        StringBuffer w = new StringBuffer(s);        
        int l;
        l=w.capacity();
        System.out.println("The capacity of variable is  "+l);
    }
}
