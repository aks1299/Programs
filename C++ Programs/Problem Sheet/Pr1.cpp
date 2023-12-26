#include<iostream>
using namespace std;

class DigiNumber
{
    long num;

    public:
        DigiNumber()
        {
            num = 0;
        }
        DigiNumber(long n)
        {
            num = n;
        }
        void digitFrequency()
        {
            int n = num;
            int arr[10] = {0};
            while(n > 0)
            {
                int r = n % 10;
                arr[r]++;
                n = n / 10; 
            }
            for(int i = 0; i < 10; i++)
            {
                if(arr[i] != 0)
                {
                    cout<<"Frequency of : "<<i<<" is "<<arr[i]<<endl;
                }
            }
        }
        long sumOfDigits(int n) 
        {
            if (n < 10) 
            {
                return n;
            } 
            else 
            {
                int r = n % 10;
                int rd = n / 10;
                return r + sumOfDigits(rd);
            }
        }
        void printSum()
        {
            cout<<"Sum of digits : "<<sumOfDigits(num)<<endl;
        }
};
int main()
{
    DigiNumber ob(4982121);
    ob.digitFrequency();
    ob.printSum();
    return 0;
}
