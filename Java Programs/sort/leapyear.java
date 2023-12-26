import java.io.*;
public class leapyear
{
    public static void main(String args[]) throws IOException
    {
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);
        int y;
        System.out.println("Enter any year : ");
        y = Integer.parseInt(in.readLine());
        
        if(y%400==0 || (y%4==0 && y%100!=0))
        {
            System.out.println("Leap Year ");
        }
        else
        {
            System.out.println("Not a leap Year");
        }
        
        
        
    }
  
}
