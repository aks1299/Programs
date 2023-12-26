import java.util.*;
class q34
{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Sentence");
        String s = in.nextLine();
        int[] f = new int[s.length()];  
        int i, j;    
        char st[] = s.toCharArray();  
        for(i = 0; i <s.length(); i++) {  
            f[i] = 1;  
            for(j = i+1; j <s.length(); j++) {  
                if(st[i] == st[j]) {  
                    f[i]++; 
                    st[j] = '0';  
                }
            }
        }  
        for(i = 0; i <f.length; i++) {  
            if(st[i] != ' ' && st[i] != '0')
            {
                System.out.println(st[i] + "-" + f[i]);    
            } 
        }
    }     
}