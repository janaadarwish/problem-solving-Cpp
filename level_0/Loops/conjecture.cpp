// Consider an algorithm that takes as input a positive integer n
// . If n
//  is even, the algorithm divides it by two, and if n
//  is odd
// , the algorithm multiplies it by three and adds one. The algorithm repeats this until n
//  is one. For example, the sequence for n=3
//  is as follows:

// 3→10→5→16→8→4→2→1

// Your task is to simulate the execution of the algorithm for a given value of n
// .

// Input
// The only input line contains an integer n
//  (1≤n≤106)
// .

// Output
// Print a line that contains all values of n
//  during the algorithm in order.

// Example
// InputCopy
// 5
// OutputCopy
// 5 16 8 4 2 1 

#include <iostream>
using namespace std ;
int main(){
    int n;
    cin >> n;
    for(; n != 1 ;){
        cout << n << " ";
            
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = (n*3) + 1;
        }
    }

    cout << 1;
    return 0;
}