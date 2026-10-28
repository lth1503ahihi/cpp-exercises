#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n, i=0, j=0;
    cout << " Nhap so nguyen duong ";
    cin >> n;
    cout << " cac so nguyen to trong pham vi " << n << " la : ";
    for ( i=2; i<=n; i++) {
    int Songuyento = 1;
    for ( j=2; j*j<=i; j++) {
    if ( i%j==0 ){
    Songuyento = 0;
    break;
    }
    }
    if ( Songuyento == 1 ){
    cout << i << " ";
    }
    }
    cout << endl;
    return 0;
    }
    
    
              