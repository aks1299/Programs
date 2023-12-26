import java.util.*;
class circle
{
    double r,ar;   //global variable
    //non-parameterised constructor
    public circle()
    {
        r=14.5;
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
        circle ob = new circle(); //object is created and constructor gets invoked automatically
        ob.area();
        ob.display();
    }
}