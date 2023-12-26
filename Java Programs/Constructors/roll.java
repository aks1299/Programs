import java.util.Scanner;
class roll
{
    int roll;
    String name;
    double a,b,c,d,e;
    roll(int rol, String naam,double z,double x,double f,double v,double g)
    {
        roll=rol;
        name=naam;
        a=z;
        b=x;
        c=f;
        d=v;
        e=g;
    }
    void peravg()
    {
        double s,p,avg;
        s=a+b+c+d+e;
        p=(s/5);
        System.out.println("Roll number"+roll);
        System.out.println("Name"+name);
        System.out.println("The total marks is: "+s);
        System.out.println("The marks in percentage is: "+p);
        if(p<33.0)
        {
            System.out.println("Fail");
        }
        else if(p>=33 & p<45)
        {
            System.out.println("Grade D.");
        }
        else if(p>=45 & p<60)
        {
            System.out.println("Grade C.");
        }
        else if(p>=60 & p<75)
        {
            System.out.println("Grade B.");
        }
        else if(p>=75)
        {
            System.out.println("Grade A.");
        }
    }
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        double q,w,r,t,y;
        int r1;
        String n;
        System.out.println("Enter Roll number: ");
        r1=in.nextInt();
        System.out.println("Enter name: ");
        n=in.next();
        System.out.println("Enter Marks for 5 subjects: ");
        q=in.nextDouble();
        w=in.nextDouble();
        r=in.nextDouble();
        t=in.nextDouble();
        y=in.nextDouble();
        roll obj=new roll(r1,n,q,w,r,t,y);
        obj.peravg();
    }
}