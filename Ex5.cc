/*Write a C++ program to implement a recursive function to find the maximum elements in an array.*/
#include <iostream>
using namespace std;

// Template function to find the maximum element in an array
template <typename T>
inline T max(T data[], int size)
{
    if(size == 0 ) return static_cast<T>(0); // Base case: If the array is empty, return a default value
    return (data[size - 1] > max(data, size - 1)) ? data[size - 1] : max(data, size - 1);// Recursively find the maximum of the remaining elements
}

int main()
{
    // Integer array and size
    int intArray[] = {12, 45, 23, 8, 56, 39, 78, 2, 17};
    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);

    // Double array and size
    double doubleArray[] = {3.14, 1.618, 2.718, 0.577, 0.01};
    int doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    
    // Find and print the maximum integer value in the array
    cout << "Maximum integer value in the array: " << max(intArray, intArraySize) << endl;
    // Find and print the maximum double value in the array
    cout << "Maximum double value in the array: " << max(doubleArray, doubleArraySize) << endl;

    return 0;
}