import java.io.*;
public class stringsubstring
{
    public static void main(String args[])throws IOException
    {
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);
        System.out.println("Example of substring(start index value, end index value) function \n");
        String s,w;
        int a,b;
        System.out.print("Enter any word ");
        s = in.readLine();
        System.out.print("Enter start index value");
        a = Integer.parseInt(in.readLine());
        System.out.print("Enter end index value");
        b = Integer.parseInt(in.readLine());        
        w = s.substring(a,b);     
        System.out.println("The extracted substring is: "+w);
        
    }
}
