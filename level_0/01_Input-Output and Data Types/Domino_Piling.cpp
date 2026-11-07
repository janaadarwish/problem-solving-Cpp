/*Task: Find the maximum number of 2 × 1 dominoes that fit on an M × N board without overlapping.*/

#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    cout << (M * N) / 2;
    return 0;
}