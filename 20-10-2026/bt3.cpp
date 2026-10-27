#include <iostream>
using namespace std;
int main () {
    long long sodien, tien;
    cout << " Nhap so dien da dung ";
    cin >> sodien;
    if ( sodien < 0) {
         cout << " so dien khong hop le";
         } else {
             if ( sodien <=50) {
                  tien = sodien*1000;
                  cout << " so tien la " << tien << endl;
            } else {
                tien = 50*1000 + ( sodien - 50 )*1200 ;
                cout << " so tien la " << tien << endl;
            }
    }
    return 0;
}    
                   