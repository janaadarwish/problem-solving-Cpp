#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = n; i <=m ; i++){
        if( i % 100 == 7 || i % 100 == 4)
        cout << i;
    }
}