#include <iostream>
using namespace std;

int main () {
    double a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;

    if (a == 0){
        if (b == 0){
            cout << " Vo so nghiem" << endl;
        } else {
            cout << " vo nghiem" << endl;
        }
    } else {
        double x = -b/a;
        cout << " Nghiem x = " << x << endl;
    }
    return 0;
}
