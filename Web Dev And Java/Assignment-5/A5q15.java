import java.util.*;
public class A5q15 {
	static int primeCount(int arr[], int n)
    {
        // Find maximum value in the array
        //.*max_element(arr, arr+n);
        int max_val = Arrays.stream(arr).max().getAsInt();
 
        // USE SIEVE TO FIND ALL PRIME NUMBERS LESS
        // THAN OR EQUAL TO max_val
        // Create a boolean array "prime[0..n]". A
        // value in prime[i] will finally be false
        // if i is Not a prime, else true.
        Boolean[] prime = new Boolean[max_val + 1];
        for (int i = 0; i < max_val + 1; i++)
        {
            prime[i] = true;
        }
 
        // Remaining part of SIEVE
        prime[0] = false;
        prime[1] = false;
        for (int p = 2; p * p <= max_val; p++)
        {
 
            // If prime[p] is not changed, then
            // it is a prime
            if (prime[p] == true)
            {
 
                // Update all multiples of p
                for (int i = p * 2; i <= max_val; i += p)
                {
                    prime[i] = false;
                }
            }
        }
 
        // Find all primes in arr[]
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (prime[arr[i]])
            {
                count++;
            }
        }
 
        return count;
    }
        
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 // Driver code   
        int arr[] = {1, 2, 3, 4, 5, 6, 7};
        int n = arr.length;
        System.out.println(primeCount(arr, n));


	}

}
