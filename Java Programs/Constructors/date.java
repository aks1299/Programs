import java.util.*;
class date
{
    int date,mon,year;
    public date(int d,int m,int y)
    {
        date=d;
        mon=m;
        year=y;
    }
    public void disp()
    {
        System.out.println("The Date is : "+date+"/"+mon+"/"+year);
    }
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        int dd,mm,yy;
        System.out.println("Enter Date: ");
        dd=in.nextInt();
        System.out.println("Enter Month: ");
        mm=in.nextInt();
        System.out.println("Enter Year: ");
        yy=in.nextInt();
        date ob=new date(dd,mm,yy);
        ob.disp();
    }
}