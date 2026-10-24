// You will given an integer n
//  print "YES" if the n
//  is prime number and "NO" other wise.

// Input
// Only one line contain one integer n
//  (1≤n≤105)
// .

// Output
// You can output "Yes" and "No" in any case (for example, strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive response).

// Examples
// InputCopy
// 7
// OutputCopy
// YES
// InputCopy
// 16
// OutputCopy
// NO

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    if ( n < 2)
       cout << "NO";

    else
    {
        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
            cout << "NO";
              return 0;
            }

        }
        cout << "YES";
    }
}
