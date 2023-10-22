/*Write a C++ program to calculate the factorial of a given number using recursion.*/
#include <iostream>
using namespace std;

// Function to calculate the factorial of a given number using recursion.
int factorial(int n);

int main()
{
    // Testing the factorial function for numbers from 0 to 9.
    for (int i = 0; i < 10; i++) 
        // Calculate and print the factorial of the current number using recursion.
        cout << "The factorial of " << i << " using recursion is:\t" << factorial(i) << endl;
    return 0;
}

// Recursive function to calculate the factorial of a number 'n'.
int factorial(int n)
{
    // Base case: If n is 0, the factorial is 1.
    if (n == 0)
        return 1;
    // Recursive case: Multiply 'n' by the factorial of 'n-1'.
    else
        return n * factorial(n - 1);
}
