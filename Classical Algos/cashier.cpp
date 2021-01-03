/*
 * This code calculates the required amount of
 * money for change and shows how many banknotes
 * of each denomination must be given
 */

//all code works with 100, 50, 20, 10, 5, 2, 1 U.S. dollars
#include <iostream>
using namespace std;

int main() {
    int totalPrice, changeMoney, usersMoney;
    cout << "\nEnter total price: ";
    cin >> totalPrice;
    cout << "Enter users money: ";
    cin >> usersMoney;
    changeMoney = usersMoney - totalPrice;

    cout << "\n\t***CHANGE***";
    //hundreds
    cout << "\n100$: " << changeMoney / 100 << " pices";
    changeMoney %= 100;

    //dozens
    if (changeMoney / 50) {
        cout << "\n50$: " << changeMoney / 50 << " pices";
        changeMoney %= 10;
    }
    else if (changeMoney / 20) {
        cout << "\n20$: " << changeMoney / 20 << " pices";
        changeMoney %= 10;
    }
    else {
        cout << "\n10$; " << changeMoney / 10 << " pices";
        changeMoney %= 10;
    }

    //units
    if (changeMoney / 5) {
        cout << "\n5$: " << changeMoney / 5 << " pices";
        changeMoney %= 5;
    }
    else if (changeMoney / 2) {
        cout << "\n2$: " << changeMoney / 2 << " pices";
        changeMoney %= 2;
    }
    else {
        cout << "\n1$: " << changeMoney << " pices";
        changeMoney %= 1;
    }

    if (changeMoney / 2) {
        cout << "\n2$: " << changeMoney / 2 << " pices";
    }

    if (changeMoney / 1) {
        cout << "\n1$: " << changeMoney << " pices";
    }

    return 0;
}