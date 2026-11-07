// You are given a number n
// . Your task is to determine whether the number is even or odd.

// Input
// The first line contains an integer t
//  (1≤t≤105
// ) — the number of test cases.

// Each of the next t
//  lines contains a single integer n
//  (1≤n≤109)
// .

// Output
// For each test case, print: "EVEN" (without the quotes) if the number is even or "ODD" (without the quotes) if the number is odd.

#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++){
        int n;
        cin >> n;

        if(n % 2 ==0)
          cout << "EVEN";
        else
          cout << "ODD";

        cout<< '\n';
    }
}