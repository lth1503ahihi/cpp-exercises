#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double a,b,c;
    cout << " Nhap a,b,c :";
    cin >> a >> b >> c ;
    double max = a;
    
    if (b> max) {
        max = b;
    }  
    if ( c> max) {
        max = c;
    }
    cout << " so lon nhat la : " << max << endl;
    return 0;
 }   