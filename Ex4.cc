/*Write a C++ program to implement a recursive function to calculate the sum of digits of a given number.*/
#include <iostream>
using namespace std;

// Function prototype for the sum_digits function
int sum_digits(int n);

int main()
{
    // Test the sum_digits function with a sample number
    int number = 12247;
    cout << "Sum of the digits of " << number << " is " << sum_digits(number) << endl;
    return 0;
}

// Recursive function to calculate the sum of digits of a number
int sum_digits(int n)
{
    if(n < 10) return n; // Base case: If the number is a single digit, return the number itself
    else return (sum_digits(n/10)+ n % 10); // Recursive case: Sum of the last digit and the result of sum_digits with the rest of the digits

}