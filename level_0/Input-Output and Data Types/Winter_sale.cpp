/*Task: Given a discount percentage and the price after discount, calculate the original price and print it to exactly two decimal places.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double discount, price;
    cin >> discount >> price;


    double originalPrice = price * 100.0 / (100.0 - discount);

    cout << fixed << setprecision(2) << originalPrice;
    return 0;
}