/*Write a C++ program to implement a recursive function
 *to calculate the product of two integer without using the multiplication operator.*/

#include <iostream>
using namespace std;


// Function prototype for the product function
int product( int a, int b);

int main()
{
    // Test the product function with two sample integers
    int num1 = 7;
    int num2 = 6;
    cout << "Product of " << num1 << " and " << num2 << " is " << product(num1, num2) << endl;
    return 0;
}

// Recursive function to calculate the product of two integers without using the multiplication operator
int product( int a, int b) // a*b= a+a+a+...+a, b times
{
    if (a == 0 || b == 0) return 0; // Base cases: Product with zero is zero
    else if(b == 1) return a; // Product with one is the number itself
    else if (a == 1) return b; // Product with one is the number itself
    else return (product(a,b-1)+a); // Recursive case: a * b = a + a * (b - 1)
}