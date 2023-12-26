import java.util.*;
class Matrix
{
    public int a[][]=new int[10][10];
    public int b[][]=new int[10][10];
    public int c[][]=new int[10][10];
    public int m,n,r,d,i,j;
    public Matrix()
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]=0;
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<d;j++)
            {
                b[i][j]=0;
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<d;j++)
            {
                c[i][j]=0;
            }
        }
    }
    public void readlimit()
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter number of rows for 1st Matrix.");
        m=in.nextInt();
        System.out.println("Enter number of columns for 1st Matrix.");
        n=in.nextInt();
        System.out.println("Enter number of rows for 2nd Matrix.");
        r=in.nextInt();
        System.out.println("Enter number of columns for 2nd Matrix.");
        d=in.nextInt();
    }
    public void input_a()
    {
        Scanner in=new Scanner(System.in);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                System.out.println("Enter element of 1st matrix : ");
                a[i][j]=in.nextInt();
            }
        }
    }
    public void input_b()
    {
        Scanner in=new Scanner(System.in);
        for(i=0;i<r;i++)
        {
            for(j=0;j<d;j++)
            {
                System.out.println("Enter element of 2nd matrix : ");
                b[i][j]=in.nextInt();
            }
        }
    }
    public void showmats()
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<d;j++)
            {
                System.out.print(b[i][j]+" ");
            }
            System.out.println();
        }
    }
    public void findproduct()
    {
        for(i=0;i<m;i++)
        {    
            for(j=0;j<d;j++)
            {    
                c[i][j]=0;      
                for(int k=0;k<m;k++)      
                {      
                    c[i][j]+=a[i][k]*b[k][j];      
                }
            }
            System.out.println();
        }
    }
    public void showmatrix()
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<d;j++)
            {
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        Matrix ob=new Matrix();
        ob.readlimit();
        ob.input_a();
        ob.input_b();
        ob.showmats();
        ob.findproduct();
        ob.showmatrix();
    }
}