/*
    Title: Recursive Decrease By One
    Author: Connor Smith
    Description: As said in the 'README', this is an example on how to find the maximum element in an array using the recursive decrease by one
                algorithm
*/

#include <iostream>
using namespace std;


// This is a recursive function to find the maximum array.
int findMaximum(int arr[], int size) {
    
    // The base case will return if there's only one element
    if (size == 1) {
        cout << "Base Case: Returning " << arr[0] << endl;
        return arr[0];
    }

    // This is the recursive case. Meaning it will find the maximum in the rest of the array.
    int maxOfFunc = findMaximum(arr, size -1);
    int curr = arr[size -1];

     // Also the use of '?' and ':'. 
     // These are representations of conditional operators, shorthand for an if else statement. AI was used to help with this statement below.
    int result = (curr > maxOfFunc) ? curr : maxOfFunc;

    // Printing the comparisons
    cout << "Comparing arr[" << size - 1 << "] = " << curr;
    cout << " with maxOfFunc = " << maxOfFunc;
    cout << " => = " << result << endl;

    return result;
}


int main() {
    int S[] = {3, 5, 2, 9, 1, 8, 0, 2};
    int size = sizeof(S) / sizeof(S[0]);

    int maxElement = findMaximum(S, size);
    cout << "The array given is {3, 5, 2, 9, 1, 8, 0, 2}";
    cout << "The maximum element in the array is: " << maxElement << endl;
}