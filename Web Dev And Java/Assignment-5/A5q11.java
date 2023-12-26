import java.util.Scanner;
public class A5q11 {
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence : ");
        String s=in.nextLine();String rev="";
        String[] arr=s.split(" ");
        for(int i=0;i<arr.length;i++)
        {
            StringBuilder ob=new StringBuilder(arr[i]);
            rev=rev+ob.reverse()+" ";
        }
        System.out.println(rev);
        in.close();
    }
}
