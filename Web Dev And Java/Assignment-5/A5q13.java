import java.util.Scanner;
public class A5q13 {
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Number  : ");
        int a=in.nextInt();
        int ctr0=0,ctr1=0,ctr2=0,ctr3=0,ctr4=0,ctr5=0,ctr6=0,ctr7=0,ctr8=0,ctr9=0;
        int b=a;
        while(b>0)
        {
            int r=b%10;
            if(r==0)
            {
                ctr0++;
            }
            else if(r==1)
            {
                ctr1++;
            }
            else if(r==2)
            {
                ctr2++;
            }
            else if(r==3)
            {
                ctr3++;
            }
            else if(r==4)
            {
                ctr4++;
            }
            else if(r==5)
            {
                ctr5++;
            }
            else if(r==6)
            {
                ctr6++;
            }
            else if(r==7)
            {
                ctr7++;
            }
            else if(r==8)
            {
                ctr8++;
            }
            else if(r==9)
            {
                ctr9++;
            }
            b=b/10;
        }
        System.out.println("The number of times 0 has appeared is"+ctr0);
        System.out.println("The number of times 1 has appeared is"+ctr1);
        System.out.println("The number of times 2 has appeared is"+ctr2);
        System.out.println("The number of times 3 has appeared is"+ctr3);
        System.out.println("The number of times 4 has appeared is"+ctr4);
        System.out.println("The number of times 5 has appeared is"+ctr5);
        System.out.println("The number of times 6 has appeared is"+ctr6);
        System.out.println("The number of times 7 has appeared is"+ctr7);
        System.out.println("The number of times 8 has appeared is"+ctr8);
        System.out.println("The number of times 9 has appeared is"+ctr9);
        in.close();
    }
}
