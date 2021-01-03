/*
 * This code calculates using the Collatz algorithm and prints to the console the number
 * of iterations for which any positive natural number will come to 1.
 *
 * COLLATZ ALGORITHM
 * - if the number is even then divide by 2;
 * - if the number is odd, then multiply by 3 and add 1.
 * After a while, any number will come to 1
 * (relevant only for positive natural numbers).
 */

#include <iostream>
using namespace std;

int main() {
    int inputNumber; //users number
    int iterations = 0; // counter for iterations

    cout << "\nEnter number: ";
    cin >> inputNumber;
    cout << "\nAlgorithm way: ";

    //counting part
    do {
        iterations +=1;
        if (inputNumber % 2 == 1) {
            inputNumber = (inputNumber * 3) + 1;
        }
        else {
            inputNumber /= 2;
        }
        cout << inputNumber << " ";
    } while (inputNumber != 1);

    cout << "\nIterations: " << iterations;

    return 0;
}