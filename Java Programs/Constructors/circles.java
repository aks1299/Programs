import java.util.*;
class circles
{
    double r,ar;   //global variable
    //parameterised constructor
    public circles(double x)
    {
        r= x;
        ar = 0.0;
        System.out.println("Constructor gets invoked ");
    }
    public void area()
    {
        ar = Math.PI*r*r;
    }
    public void display()
    {
        System.out.println("Area of circle = "+ar);
    }
    public static void main()
    {
        Scanner in = new Scanner(System.in);
        double rad;
        System.out.println("Enter Radius ");
        rad = in.nextDouble();
        circles ob = new circles(rad); //object is created and constructor gets invoked automatically
        ob.area();
        ob.display();
    }
}