#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cout << " Nhap n ";
    cin >> n;
    if ( n < 0){
        cout << " khong phai so chinh phuong " << endl;
    } else {
        int can = sqrt(n);
        if ( can*can == n) {
            cout << " So chinh phuong ";
            } else {
                cout << " khong phai so chinh phuong ";
            }
    }
    return 0;
    }            
                  
              