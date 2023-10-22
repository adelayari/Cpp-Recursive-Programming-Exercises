/*Write a C++ program to reverse a string using recursion.*/
#include <iostream>
#include <string>
using namespace std;

// Prototype for the reverse function
string reverse(string my_string);

int main()
{
    // Initialize a string to use it for test.
    string my_string = "Hello world";

    // Testing my reverse function
    cout << my_string << ": when reversed = " << reverse(my_string) << endl;

    return 0;
}

// Function to reverse a string using recursion
string reverse(string my_string)
{
    // Base case: if the string is empty, return an empty string
    if (my_string.length() == 0) return "";
    // Recursive case: reverse the substring starting from the second character & append the first character to the end
    else return (reverse(my_string.substr(1)) + my_string[0]);
}


