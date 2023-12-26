import java.util.*;
class Search
{
    int arr[]=new int[150];
    int limit,num,start,last;
    public Search()
    {
        int i;
        for(i=0;i<150;i++)
        {
            arr[i]=0;
        }
    }
    public Search(int n)
    {
        limit=n;
    }
    public void readarray(int l)
    {
        int i;
        Scanner in=new Scanner(System.in);
        for(i=0;i<limit;i++)
        {
            System.out.println("Enter Element : ");
            arr[i]=in.nextInt();
        }
        start=0;
        last=limit;
    }
    public void disparray()
    {
        int i;
        for(i=0;i<limit;i++)
        {
            System.out.print(arr[i]+",");
        }
    }
    public void sort()
    {
        int i,j,temp;
        for(i=0;i<limit-1;i++)
        {
            for(j=i+1;j<limit;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
    }
    public void inputsearchnum()
    {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter number to be searched : ");
        num= in.nextInt();
    }
    public int binsearch(int s, int l)
    {
        int m,i=0,pos=0;
        m=(s+l)/2;
        for(i=0;i<=limit;i++)
        {
            if(arr[m]>num)
            {
                l=m;
                m=(s+l)/2;
            }
            else if(arr[m]<num)
            {
                s=m;
                m=(s+l)/2;
            }
            else if(arr[m]==num)
            {
                pos=m+1;
                break;
            }
        }
        if(pos>0)
        {
            return pos;
        }
        else
        {
            return -1;
        }
    }
    public void printresult()
    {
        int result;
        Search ob=new Search();
        result=ob.binsearch(start,limit);
        System.out.println("Position of element : "+result);
    }
    public static void main()
    {
        int lim;
        Scanner in=new Scanner(System.in);
        System.out.println("Enter number of elements. ");
        lim=in.nextInt();
        Search ob=new Search(lim);
        ob.readarray(lim);
        ob.sort();
        ob.disparray();
        ob.inputsearchnum();
        ob.printresult();
    }
}
