#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n, i=0;
    cout << " Nhap so nguyen duong n : ";
    cin >> n;
    if ( n <= 0) {
         cout << " so khong hop le, vui long nhap lai ";
         return 0;
        }
        cout << " cac uoc so cua so " << n << " la : ";
        for ( i=1; i<=n; i++) {
        if ( n%i==0){
        cout << i << " ";
        }
        }
        cout << endl;
        return 0;
        }
         
              
