import java.io.*;
public class stringequalsIgnoreCase
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);
        System.out.println("Example of equalsIgnoreCase() function \n");
        String s,w;
        System.out.println("Enter first word ");
        s = in.readLine();
        System.out.println("Enter second word ");
        w = in.readLine();
        if(s.equalsIgnoreCase(w))
            System.out.println("The strings are equal ");
        else
            System.out.println("The strings are unequal ");
        
        
    }
}
