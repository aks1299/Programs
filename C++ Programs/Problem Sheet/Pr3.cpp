#include<iostream>
using namespace std;

class theSeries
{
    int limit = 0;
    int arr[];
    public:
        theSeries()
        {
            limit = 0;
            arr[50];
        }
        void readList()
        {
            cout<<"Enter the limit of the list : ";
            cin>>limit;
            for(int i = 0; i < limit; i++)
            {
                cout<<"Enter Element : ";
                cin>>arr[i];
            }
        }
        bool isPrime(int n, int i = 2)
        {
	        // Base cases
	        if (n <= 2)
		        return (n == 2) ? true : false;
	        if (n % i == 0)
		        return false;
	        if (i * i > n)
		        return true;

	        // Check for next divisor
	        return isPrime(n, i + 1);
        }   
        void printPrimes()
        {
            for(int i = 0; i < limit; i++)
            {
                if(isPrime(arr[i], 2))
                {
                    cout<<arr[i]<<" "<<endl;
                }
                else
                {
                    cout<<"No "<<endl;
                }
            }
        }
};
int main()
{
    theSeries ob;
    ob.readList();
    ob.printPrimes();

    return 0;
}