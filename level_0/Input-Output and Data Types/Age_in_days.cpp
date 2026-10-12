/*
Task: Convert an age given in days into years, months, and remaining days. Use 365 days per year and 30 days per month.
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int years = N / 365; 
    N %= 365;           
    int months = N / 30; 
    int days = N % 30;   

    cout << years << " years "
         << months << " months "
         << days << " days";

    return 0;
}