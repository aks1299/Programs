import java.util.*;
class q21 {   
    public static void main (String[] args)    
    {   
        int a[] = new int [5];    
        int[] d= new int[5];
        int index = 0;
        for (int i = 0; i < 5; i++)   
        {   
            int f = 0;  
            for (int j = 0; j < i; j++){  
                if (a[i] == a[j]){   
                    f = 1;  
                    break;   
                }  
            }  
            if (f == 0){   
                d[index] = a[i];  
                index++; 
            }  
        }  
        for(int i = 0; i < index; i++)
        {
            System.out.print( d[i] + " ");
        }
    }
}