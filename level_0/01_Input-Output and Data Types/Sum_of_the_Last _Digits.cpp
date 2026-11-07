/*
Task: Read two numbers and print the sum of their last digits.
*/
#include <iostream>
using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;

    cout << (X % 10) + (Y % 10);
    return 0;
}