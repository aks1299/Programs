import java.io.*;
public class stringcharAt
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);
        System.out.println("Example of charAt() function \n");
        String s;
        System.out.println("Enter any word ");
        s = in.readLine();
        int n;
        System.out.println("Enter position of charcter to be extracted ");
        n = Integer.parseInt(in.readLine());
        int l;
        l=s.length();
        char x;
        if(l>=n)
        {
            x = s.charAt(n);
            System.out.println("The extracted character is "+x);
        }
        else
            System.out.print("Invalid input ");
    }
}
