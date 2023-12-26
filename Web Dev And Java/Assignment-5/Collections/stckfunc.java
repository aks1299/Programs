import java.util.*;
public class stckfunc 
{
    public static void main(String[] args)
    {
        //push elements
        Stack<String> ob=new Stack<>();
        ob.push("Lauda");
        ob.push("Lassan");
        ob.push("halua");
        //peek
        System.out.println(ob.peek());
        //pop
        System.out.println(ob.pop());
        System.out.println(ob.peek());
    }
}
