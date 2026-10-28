#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n, i=0;
    double s=0;
    cout << " Nhap so nguyen duong n ";
    cin >> n;
    for ( i=1; i<=n; i++){
    s+=(1.0/i);
    } 
    cout << " Tong la " << s << " ";
    cout << endl;
    return 0;
    }
    
    
              