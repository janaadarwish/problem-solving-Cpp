// Hady and Fady are playing a "Cards Comparison" game.

// Hady gives Fady two cards, A
//  and B
// . Both of them contains an integer, Fady calculates AB
// .
// Fady gives Hady two cards, C
//  and D
// . Both of them contains an integer, Hady calculates CD
// .
// Fady wins if his result is strictly greater than Hady's result (AB>CD
// ).

// Hint:

// Calculating AB
//  and CD
//  directly may produce extremely large numbers.

// Recall that:

// log(xy)=y⋅log(x)

// In C++, you can use the log() function.

// Input
// Only one line containing four integers A
// , B
// , C
// , and D
//  (1≤A,C≤107,1≤B,D≤1012
// ).

// Output
// Output "YES" (without quotes) if Fady wins, and "NO" (without quotes) otherwise.

// You can output "YES" and "NO" in any case (for example, strings "yES", "yes" and "Yes" will be recognized as a positive response).

#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long double x = A, y = C;

    long double z1 = (x - 1) / (x + 1);
    long double z2 = (y - 1) / (y + 1);

    long double p1 = z1, p2 = z2;
    long double logA = 0, logC = 0;

    for (int i = 1; i <= 10000; i += 2) {
        logA += p1 / i;
        logC += p2 / i;
        p1 *= z1 * z1;
        p2 *= z2 * z2;
    }

    logA *= 2;
    logC *= 2;

    if (B * logA > D * logC)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
