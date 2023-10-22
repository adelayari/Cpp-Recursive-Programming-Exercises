/*Write a C++ program to implement a recursive function to get the nth Fibonacci number.*/
#include <iostream>
using namespace std;

// Prototype of Fibonacci Recursive function:
int fibonacci(int n);

int main()
{
    int n = 10;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) 
{
    if (n <= 0) return 0; // Fibonacci(0) is 0
     else if (n == 1)  return 1; // Fibonacci(1) is 1
    else return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
}