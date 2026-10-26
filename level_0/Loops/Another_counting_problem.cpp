// Farid stumbled upon a stick of length n
// , sparking his curiosity about the number of right-angled triangles he could form with all sides being equal, where this stick serves as the hypotenuse.

// Farid knows that a stick of length n
//  can be the hypotenuse to a right-angled triangle with sides a
//  and b
//  if a2+b2=n2
// .

// Your task is to help Farid determine the number of all possible ways that n
//  can be a hypotenuse in such right-angled triangles.

// Note that: a=4
//  and b=3
//  is the same as b=3
//  and a=4
// .

// Input
// A single integer n
//  (1≤n≤103)
// , representing the length of the stick found by Farid.

// Output
// Print a single integer, representing the number of all possible ways that n
//  can be a hypotenuse in right-angled triangles with all side lengths being equal.

// Examples
// InputCopy
// 5
// OutputCopy
// 1
// InputCopy
// 1000
// OutputCopy
// 3
// Note
// In the given example, the stick of length 5 can form only one right-angled triangle with all side lengths being equal, which is a triangle with sides 3, 4, and 5.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int nn = n*n;
    int count = 0;
    
    for(int i = 1 ; i <= n ; i++){
        for(int j = i ; j <= n ; j++){

            int ii = i*i;
            int jj = j*j;

            if( ii + jj == nn)
              count++;
        }
    }
    cout << count;
}