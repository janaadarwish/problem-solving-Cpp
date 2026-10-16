// Recently, Ouda made a simple calculator for basic mathematical operations, and he wanted to test it. Ouda will test it with a mathematical expression.
// The expression will be one of the following expressions: A+B
// , A−B
// , A∗B
// , and A/B


#include <iostream>
using namespace std;

int main() {
    int A, B;
    char op;
    cin >> A >> op >> B;
    if (op == '+') {
        cout << A + B;
    } else if (op == '-') {
        cout << A - B;
    } else if (op == '*') {
        cout << A * B;
    } else if (op == '/') {
        cout << A / B;
    }
}