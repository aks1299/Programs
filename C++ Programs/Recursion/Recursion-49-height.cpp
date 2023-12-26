import java.util.*;
public class Solution
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter n : ");
        int n=in.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
        {
            int val=in.nextInt();
            a[i]=val;
        }
        for(int i=0;i<n;i++)
        {
            int x=a[i];
            System.out.println(x);
        }
    }
}