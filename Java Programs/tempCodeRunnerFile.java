package Arrays;
import java.util.*;
public class q22 {

	public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	System.out.println("enter the number in array A");
	int n=sc.nextInt();
	System.out.println("enter the number in array B");
	int m=sc.nextInt();
	int[]A=new int[n];
	int[]B=new int[m];
	int[]C=new int[n+m];
	System.out.println("enter element for array of A");
	for(int i=0;i<=n;i++) {
		A[i]=sc.nextInt();
	}
	System.out.println("enter element for array of B");
	for(int i=0;i<=m;i++) {
		B[i]=sc.nextInt();
	}
		//merge even number into c
		int cIndex=0;
		for(int i=0;i<n;i++) {
			if(A[i]%2==0) {
				C[cIndex]=A[i];
				cIndex++;
			}
		}
		for(int i=0;i<m;i++) {
			if(B[i]%2==0) {
				C[cIndex]=B[i];
				cIndex++;
	}
		}
		//merge odd elements into c
		for(int i=0;i<n;i++) {
			if(A[i]%2!=0) {
				C[cIndex]=A[i];
				cIndex++;
			}
		}
		for(int i=0;i<m;i++) {
			if(B[i]%2!=0) {
				C[cIndex]=B[i];
				cIndex++;
	}
		}
		System.out.println("merged array C with odd and even:");
		for(int i=0;i<cIndex;i++) {
			System.out.println(C[cIndex]);
		}
	}
}