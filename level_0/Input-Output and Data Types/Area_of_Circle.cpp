/*
Task: Calculate a circle's area using π = 3.141592653 and print exactly nine digits after the decimal point.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double R;
    cin >> R;

    double area = 3.141592653 * R * R; 
    cout << fixed << setprecision(9) << area;

    return 0;
}