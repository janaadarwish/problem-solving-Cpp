// Coach Medo is a very strict coach. He doesn't allow Fady to play with his friends unless he solves his tasks. After solving so many tasks, Fady is so tired so he needs your help with the last task.

// You will be given two integers N,M
// , you have to print all the lucky numbers between N
//  and M
//  (inclusive) in increasing order.

// Lucky number is any positive number that it's decimal representation contains only 4
//  and 7
// . For example 4
// , 7
// , 47
// , 774
//  are lucky, 147
// , 675
//  are not.

// Input
// Only one line containing two numbers N
//  and M
//  (1≤N≤M≤105)
//  .

// Output
// Print all the lucky numbers between N
//  and M
//  (inclusive) in increasing ordere. If there is no lucky numbers print −1
// .

// Examples
// InputCopy
// 1 10
// OutputCopy
// 4 7 
// InputCopy
// 8 20
// OutputCopy
// -1


#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool found = false;

    for (int i = n; i <= m; i++) {
        int x = i;

        while (x > 0 && (x % 10 == 4 || x % 10 == 7)) {
            x /= 10;
        }

        if (x == 0) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
        cout << -1;

    return 0;
}
