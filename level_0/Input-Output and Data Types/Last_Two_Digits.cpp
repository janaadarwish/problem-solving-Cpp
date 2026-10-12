// Task: Read four numbers and print the last two digits of their product, ignoring leading zeros.

#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    
    long long result = A % 100;
    result = (result * (B % 100)) % 100;
    result = (result * (C % 100)) % 100;
    result = (result * (D % 100)) % 100;

   
    cout << result;
    return 0;
}