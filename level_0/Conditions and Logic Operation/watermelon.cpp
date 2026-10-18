// Given x
// , print "Yes" if the first digit of x
//  is even; otherwise, print "No".

// Input
// The input contains an integer x
//  (1000≤x≤9999)
// .

// Output
// Print "Yes" if the first (leftmost) digit of x
//  is even; otherwise, print "No".
#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    if (w > 2 && w % 2 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}