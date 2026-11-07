/*Task: Read two numbers X and Y, then print their sum, product, and subtraction in the required format.*/

#include <iostream>
using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;

    cout << X << " + " << Y << " = " << X + Y << '\n';
    cout << X << " * " << Y << " = " << X * Y << '\n';
    cout << X << " - " << Y << " = " << X - Y << '\n';

    return 0;
}