/*Write a C++ program to find the sum of all elements in an array using recursion.*/
#include <iostream>
using namespace std;

// Template function to calculate the sum of elements in an array using recursion.
template <typename T>
inline T sum(T data[], const int& size)
{
    // Base case: If the size of the array is 0, return 0.
    if (size == 0) return 0;
    // Recursive case: Add the last element to the sum of the remaining elements.
    else return (sum(data, size - 1) + data[size - 1]);
}

int main()
{
    // Define arrays of integers and doubles.
    double double_array[] = {1.0, 2.3, 5.6, 7.8};
    int int_array[] = {1, 2, 5, 7};

    // Calculate the size of each array.
    int size_double = sizeof(double_array) / sizeof(double_array[0]);
    int size_int = sizeof(int_array) / sizeof(int_array[0]);

    // Calculate and print the sum of integer elements using recursion.
    cout << "Sum of array of integer elements using recursion:\t" << sum(int_array, size_int) << "\n" << endl;

    // Calculate and print the sum of double elements using recursion.
    cout << "Sum of array of double elements using recursion:\t" << sum(double_array, size_double) << "\n" << endl;

    return 0;
}
