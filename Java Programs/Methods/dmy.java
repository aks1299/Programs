import java.util.*;
class dmy
{
    public static void disp(int d,int m,int y)
    {
        if(d<10 && m<10)
        {
            System.out.println("The Date is : 0"+d+"/0"+m+"/"+y);
        }
        else if(d<10 && m>=10)
        {
            System.out.println("The Date is : 0"+d+"/"+m+"/"+y);
        }
        else
        {
            System.out.println("The Date is : "+d+"/"+m+"/"+y);
        }
    }
    public static void main(String[] args)
    {
        int x,y,z;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter  Date : ");
        x=in.nextInt();
        System.out.println("Enter  Month : ");
        y=in.nextInt();
        System.out.println("Enter Year : ");
        z=in.nextInt();
        dmy ob=new dmy();
        ob.disp(x,y,z);
    }
}