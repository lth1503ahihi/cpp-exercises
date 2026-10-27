#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double a, b, c;
    cout << " Nhap a, b, c : ";
    cin >> a >> b >> c;
    double delta = b*b -4*a*c;
    if ( delta < 0 ) {
        cout << " Phuong trinh vo nghiem ";
        
        
    } else if ( delta == 0) {
        double x = ( -b/ (2*a));
        cout << " Phuong trinh co nghiem kep x = " << x << endl;
    } else {
        double x1= (-b + sqrt(delta)) / (2*a);
        double x2= (-b - sqrt(delta)) / (2*a);
        cout << " Phuong co 2 nghiem phan biet " << endl;
        cout << " x1 = " << x1 << endl;
        cout << " x2 = " << x2 << endl;
    }
    return 0;
}        