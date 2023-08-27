#include <iostream>
using namespace std;

int main()
{
    int sumThenSquare = 0;   // Initialize variable to hold sum of numbers.
    int sumOfSquares = 0;    // Initialize variable to hold sum of squared numbers.
    int limit = 100;         // Define the range of numbers from 1 to 100.
    int difference;          // Variable to store the difference between two sums.

    // Loop through numbers from 1 to 100.
    for (int i = 1; i <= limit; i++) {
        sumThenSquare += i;              // Accumulate sum of numbers.
        sumOfSquares += (i * i);         // Accumulate sum of squared numbers.
    }
        
    sumThenSquare = sumThenSquare * sumThenSquare; // Square the sum of numbers.

    difference = sumThenSquare - sumOfSquares;     // Calculate the difference.

    cout << difference;   // Output the difference.

    return 0;             // Indicate successful completion.
}
