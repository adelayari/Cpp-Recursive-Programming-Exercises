/*Write a C++ program to implement a recursive function to check if a given string is a palindrome.*/
#include <iostream>
#include <string>

using namespace std;
// Prototype of palindrome function:
bool palindrome(const string& my_string, int start, int end);

int main()
{
    string word1 = "HahaH";
    cout << "Test 1: " << word1 << " is a palindrome? ";
    (palindrome(word1, 0, word1.length() - 1))? cout << "Yes" << endl : cout << "No" << endl;

    string word2 = "Haha";
    cout << "Test 2: " << word2 << " is a palindrome? ";
    (palindrome(word2, 0, word2.length() - 1))? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}

// Function to check if a given string is a palindrome using recursion
bool palindrome(const string& my_string, int start, int end)
{
    if(start >= end) return true;// Base case: If the start index is greater than or equal to the end index, it's a palindrome
    // Recursive case: Compare characters from both ends
    else if (my_string[start] == my_string[end])return(palindrome(my_string, start+1, end-1));
    return false;// If characters don't match, it's not a palindrome
}