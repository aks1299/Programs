import java.util.*;
class LCM
{
  public static int lcm(int n1,int n2)
  {
    int hcf=1,lcm;
    for(int i = 1; i <= n1 && i <= n2; ++i) 
    {
          if(n1 % i == 0 && n2 % i == 0)
        {
            hcf=i;
        }
    }
    lcm = (n1 * n2) / hcf;
    return(lcm);
  }
  public static void main(String[] args)    
  {
    Scanner in =new Scanner(System.in);
    int num1,num2,k;
    System.out.println("Enter 1st number : ");
    num1=in.nextInt();
    System.out.println("Enter 2nd number : ");
    num2=in.nextInt();
    LCM ob=new LCM();
    k=ob.lcm(num1,num2);
    System.out.println("The LCM of "+num1+" and "+num2+" is "+k);
  }
}