import java.util.*;
class q19
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence.");
        String s=in.nextLine();
        int ac=0,ec=0,ic=0,oc=0,uc=0,i,l;
        l=s.length();
        for(i=0;i<l;i++)
        {
            char x=s.charAt(i);
            if(x=='a')
                ac++;
            else if(x=='e')
                ec++;
            else if(x=='i')
                ic++;
            else if(x=='o')
                oc++;
            else if(x=='u')
                uc++;    
        }
        System.out.println("Number of times a has appeared = "+ac);
        System.out.println("Number of times e has appeared = "+ec);
        System.out.println("Number of times i has appeared = "+ic);
        System.out.println("Number of times o has appeared = "+oc);
        System.out.println("Number of times u has appeared = "+uc);
    }
}