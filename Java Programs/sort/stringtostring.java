import java.io.*;
public class stringtostring
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);
        System.out.println("Example of tostring() function \n");
        String a;
        String s;
        System.out.println("Enter any word ");
        a=in.readLine();
        s= a.toString();
        System.out.println("The string conversion to itself is  "+s);
    }
}