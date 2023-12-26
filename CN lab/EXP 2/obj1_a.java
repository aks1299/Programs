import java.util.*;
import java.io.*;
class obj1_a
{
    public static void main (String s[])throws IOException
    {
        FileOutputStream f= new FileOutputStream("123.txt"); 
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the text and put @ for end:");
        char ch;
        while(true)
        {
            ch=(char)sc.next().charAt(0);
            if(ch!='@')
            f.write(ch); 
            else
                break;
        }
        f.close();
        sc.close();
        System.out.println("the file is successfully saved");
    }
}