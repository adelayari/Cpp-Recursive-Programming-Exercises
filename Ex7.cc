/*Write a C++ program to implement a recursive function to calculate the power of a number.*/
#include <iostream>
using namespace std;

// Function prototype for the power function
double pow(double x, int n);

int main()
{
    // Test the pow function with some sample values
    double base = 2.0;
    int exponent = 7;
    double result = pow(base, exponent);

    cout << "Power of " << base << " raised to the " << exponent << " is " << result << endl;   
    return 0;
}

double pow(double x, int n)
{
    if(n == 0) return 1.0; // Base case: If the exponent is 0, return 1 (x^0 = 1)
    else return (x* pow(x,n-1)); // Recursive case: Multiply x by the result of pow(x, n-1)
}