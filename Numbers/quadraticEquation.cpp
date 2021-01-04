#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d, x1, x2;
    cout << "\n\t***Quadratic Equation Solver***";
    cout << "\n\t\tax^2 + bx + c = 0";
    cout << "\n\t\ta!=0 | b!=0 | c!=0";
    cout << "\n\nEnter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    d = (b * b) - 4 * a * c;
    if (d > 0) {
        x1 = (-b + sqrt(d)) / 2 * a;
        cout << "\nx1 = " << x1;
        x2 = (-b - sqrt(d)) / 2 * a;
        cout << "\nx2 = " << x2;
    }
    else if (d == 0) {
        x1 = (-b) / 2 * a;
        cout << "\nx = " << x1;
    }
    else {
        cout << "\nD < 0";
    }

    return 0;
}
