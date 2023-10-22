#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {
    
    int num1 = 1254, num2 = 627;
    cout << "The greatest common divisor (GCD) of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;

    return 0;
}

int gcd(int a, int b) 
{
    if (b == 0) return a; // Base case: If one of the numbers is zero, return the other number as the GCD.
    return gcd(b, a % b); // Recursive case: Calculate the GCD using the modulo operator.
}
