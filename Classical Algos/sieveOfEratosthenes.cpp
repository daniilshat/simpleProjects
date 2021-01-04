/*
 * This code finds all primes in a custom sequence using 'Sieve of Eratosthenes'
 */
#include <iostream>
using namespace std;

int main() {
    int usersNumber;
    cout << "\nEnter number: ";
    cin >> usersNumber;
    //filling an array with numbers from a sequence [2:usersNumber]
    int sequence[usersNumber];
    for (int i = 2; i <= usersNumber; ++i) {
        sequence[i - 2] = i;
    }
    //printing prime numbers from a sequence
    int a[usersNumber];
    cout << "\nPrime numbers: 2 3 5 7 ";
    for (int i = 0; i <= usersNumber; ++i) {
        if (sequence[i] % 2 != 0 && sequence[i] % 3 != 0 && sequence[i] % 5 != 0 && sequence[i] % 7 != 0) {
            cout << sequence[i] << " ";
        }
    }
    return 0;
}