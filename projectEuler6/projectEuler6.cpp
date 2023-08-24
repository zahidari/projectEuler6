#include <iostream>
using namespace std;

int main()
{
    int sumThenSquare = 0;
    int sumOfSquares = 0;
    int limit = 100;
    int difference;

    

    for (int i = 1; i <= limit; i++) {
        sumThenSquare = sumThenSquare + i;
        sumOfSquares = sumOfSquares + (i * i);
    }
        
    sumThenSquare = sumThenSquare * sumThenSquare;
    

    //the difference
    difference = sumThenSquare - sumOfSquares;

    cout << difference;
    return 0;

}

