import java.util.*;
public class Arraylistfunc
{
    public static void main(String[] args)
    {
        ArrayList<String> ob=new ArrayList<>();
        //Add elements
        ob.add("Aman");
        ob.add("Kumar");
        ob.add("Singh");
        ob.add("John");
        ob.add("Wick");
        //get elements
        for(int i=0;i<ob.size();i++)
        {
            System.out.print(ob.get(i)+" ");
        }
        //remove
        ob.remove(0);
        System.out.println();
        //iterator
        Iterator<String> itr=ob.iterator();
        while(itr.hasNext())
        {
            System.out.print(itr.next()+",");
        }
    }
}