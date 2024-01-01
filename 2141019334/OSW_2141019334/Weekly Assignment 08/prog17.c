// Write a program to find the sum of a geometric sequence using recursion.
#include <stdio.h>
#include <math.h>
// Function to find the sum of a geometric sequence using recursion
double geometricSum(int firstTerm, double ratio, int n)
{
    if (n == 0)
    {
        return 1; // Base case: 1 is added when n becomes 0
    }
    else
    {
        return firstTerm * pow(ratio, n) + geometricSum(firstTerm, ratio, n - 1);
    }
}

int main()
{
    int firstTerm, n;
    double ratio;

    // Taking input from the user
    printf("Enter the first term of the geometric sequence: ");
    scanf("%d", &firstTerm);
    printf("Enter the common ratio of the geometric sequence: ");
    scanf("%lf", &ratio);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Checking if the number of terms is non-negative
    if (n < 0)
    {
        printf("Please enter a non-negative value for the number of terms.\n");
    }
    else
    {
        // Calculating the sum of the geometric sequence
        double sum = geometricSum(firstTerm, ratio, n - 1);

        printf("Sum of the geometric sequence: %.2lf\n", sum);
    }

    return 0;
}
