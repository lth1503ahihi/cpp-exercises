#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n;
    long long p= 1;
    int i=0;
    cout << " Nhap so nguyen duong n : ";
    cin >> n;
    for (i=1; i<=n; i++){
    p *= (2*i-1);
    }
    cout << " tich la " << p << " ";
    cout << endl;
    return 0;
    }
    
    
    
              