import java.io.*;
public class stringlength
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);
        System.out.println("Example of length() function \n");
        String s;
        System.out.println("Enter any word ");
        s = in.readLine();
        int l;
        l=s.length();
        System.out.println("The number of characters is "+l);
    }
}
