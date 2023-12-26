import java.util.Scanner;
public class Solution {

    public static void main(String[] args) {
        int c=1;
        String s=null;
        Scanner in=new Scanner(System.in);
        for(int i=0;i<3;i++)
        {
            s=in.nextLine();
            if(s==null)
            {
                break;
            }
            System.out.println(c+" "+s);
            c++;
        }
        in.close();
    }
}
