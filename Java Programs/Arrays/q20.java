import java.util.*;
class q20
{
  public static int hcff(int n1,int n2)
  {
    int hcf=1;
    for(int i = 1; i <= n1 && i <= n2; ++i) 
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            hcf=i;
        }
    }
    return hcf;
  }
  public static void main(String[] args)    
  {
    Scanner in =new Scanner(System.in);
    int n=0,i,j;
    int a[]=new int[5];
    q20 ob=new q20();
    for(i=0;i<5;i++)
    {
        System.out.println("Enter Number.");
        a[i]=in.nextInt();
    }
    for(i=0;i<4;i++)
    {
            n=ob.hcff(a[i],a[i+1]);
            a[i+1]=n;
    }
    System.out.println("Hcf ="+n);
  }
}