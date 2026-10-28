#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n, i=0;
    cout << " Nhap so nguyen duong n : ";
    cin >> n;
    cout << " cac so hoan hao trong pham vi " << n << " la : ";
    for ( i=2; i<=n; i++) {
    int Uoc=0;
    for (int j=1; j<=i/2; j++) {
    if (i%j==0){
    Uoc +=j;
    }
    }
    if ( Uoc == i){
    cout << i << " " ;
    }
    }
    cout << endl;
    return 0;
    }
    
    
    
              