#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n, i=0, j=0;
    long long s1=0, s3=0;
    cout << " Nhap so nguyen duong n : ";
    cin >> n;
    for ( i=1; i<=n; i++){
    s1+=i;
    }
    for ( j=2; j<=2*n; j+=2) {
    s3+=j;
    }
    cout <<" Tong s1 la : " << s1 << " ";
    cout <<" Tong s3 la : " << s3 << " ";
    cout << endl;
    return 0;
    }
    
    
    
    
    
    
              