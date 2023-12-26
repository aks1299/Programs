import java.util.*;
public class Sort
{
    static Scanner in=new Scanner(System.in);
    static int a[]={23,55,1,56,7,88,9,33,22,43};
    static int size=a.length,i,j;
    Sort()
    {
        
    }
    void disp()
    {
        for(i=0;i<size;i++)
        {
            System.out.println(a[i]+" ");
        }
        System.out.println();
    }
    void lsearch(int x)
    {
        for(i=0;i<size;i++)
        {
            if(x==a[i])
            {
                System.out.println("The Element is found at the index : "+i);
                break;
            }
            else
            {
                System.out.println("The Element is not present in the array : ");
            }
        }
    }
    int bsearch(int arr[], int l, int r, int x)
    {
        Sort ob=new Sort();
        ob.bsort();
        if (r >= l) 
        {
            int mid = l + (r - l) / 2;
            if (a[mid] == x)
                return mid;
            if (a[mid] > x)
                return bsearch(a, l, mid - 1, x);
            return bsearch(a, mid + 1, r, x);
        }
        return -1;
    }
    void swap(int a,int b)
    {
        int t=a;
        a=b;
        b=t;
    }
    void bsort()
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (a[j]>a[j + 1]) 
                {
                    swap(a[j],a[j+1]);
                }
            }
        }
    }
    void isort()
    {
        
        for (int step = 1; step < size; step++) 
        {
            int key = a[step];
            int j = step - 1;
            while (j >= 0 && key < a[j]) 
            {
                a[j + 1] = a[j];
                --j;
            }
            a[j + 1] = key;
        }
    }
    void ssort()
    {
        for (int step = 0; step < size - 1; step++) {
            int min_idx = step;
      
            for (int i = step + 1; i < size; i++) 
            {
                if (a[i] < a[min_idx]) 
                {
                    min_idx = i;
                }
            }
            int temp = a[step];
            a[step] = a[min_idx];
            a[min_idx] = temp;
          }
    }
    public static void main(String[] args)
    {
        Sort ob=new Sort();
        while(true)
        {
            System.out.println("Enter Choice : ");
            System.out.println("1-Display");
            System.out.println("2-Linear Search");
            System.out.println("3-Binary Search");
            System.out.println("4-Bubble Sort");
            System.out.println("5-Insertion Sort");
            System.out.println("6-Selection Sort");
            System.out.println("7-Exit");
            int ch=in.nextInt();
            if(ch==1)
            {
                ob.disp();
            }
            else if(ch==2)
            {
                System.out.println("Enter Element to be Searched : ");
                int x=in.nextInt();
                ob.lsearch(x);
            }
            else if(ch==3)
            {
                System.out.println("Enter Element to be Searched : ");
                int x=in.nextInt();
                ob.bsearch(a,0,size,x);
            }
            else if(ch==4)
            {
                ob.bsort();
            }
            else if(ch==5)
            {
                ob.isort();
            }
            else if(ch==6)
            {
                ob.ssort();
            }
            else
            {
                System.exit(0);
            }
        }
    }
}