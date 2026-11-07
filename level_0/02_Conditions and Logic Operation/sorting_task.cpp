// Ouda has three numbers A,B,C
// . One day he decided to sort them ascendingly and write the answer.

// Ouda wants to see if Gom3a can sort them as will, so he wrote the numbers by their first order and gave them to Gom3a.

// Your task is to print these numbers in ascending order as Ouda has done first then print the numbers by their first order to give them to Gom3a.

// Input
// Only one line containing three numbers A,B,C
//  (−106≤A,B,C≤106)
// .

// Output
// Print the values in ascending order then print the numbers by their first order.
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    if (x <= y && x <= z) {
        if (y <= z)
            cout << x << " " << y << " " << z;
        else
            cout << x << " " << z << " " << y;
    }
    else if (y <= x && y <= z) {
        if (x <= z)
            cout << y << " " << x << " " << z;
        else
            cout << y << " " << z << " " << x;
    }
    else {
        if (x <= y)
            cout << z << " " << x << " " << y;
        else
            cout << z << " " << y << " " << x;
    }
    cout << '\n';
    cout << "  " << x << " " << y << " " << z << '\n';

    return 0;
}