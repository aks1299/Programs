import java.io.*;
public class stringequal
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);
        System.out.println("Example of equals() function \n");
        String s,w;
        System.out.print("Enter first word ");
        s = in.readLine();
        System.out.print("Enter second word ");
        w = in.readLine();
        if(s.equals(w))
            System.out.print("The strings are equal ");
        else
            System.out.print("The strings are unequal ");
              
    }
}
