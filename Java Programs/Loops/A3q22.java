import java.util.Scanner;
public class A3q22 {
  public static void main(String[] args) {
    Scanner in=new Scanner(System.in);
    System.out.println("Enter First number : ");
    int n1,n2,hcf=1;
    n1=in.nextInt();
    System.out.println("Enter Second number : ");
    n2=in.nextInt();
    for(int i = 1; i <= n1 && i <= n2; ++i) 
    {
          if(n1 % i == 0 && n2 % i == 0)
        {
            hcf=i;
        }
    }

    int lcm = (n1 * n2) / hcf;
    System.out.println("The HCF of "+n1+" and "+n2+" is : "+hcf);
    System.out.println("The LCM of "+n1+" and "+n2+" is : "+lcm);
  }
}