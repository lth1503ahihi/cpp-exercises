#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double x;
    int dem = 0;
    int soAm = 0;
    double Tong = 0;
    cout << " Nhap so thuc vao day ";
    cin >> x;
    while ( x!=0){
    dem++;
    Tong +=x;
    
    if (x < 0 ) {
    soAm++;
    
    }
    
    cin >> x;
    }
    
    cout << "\n -- Ket qua -- " << endl;
    cout << " so phan tu da nhap " << dem << endl;
    if ( dem > 0){
    cout << " trung binh cong la " << Tong/dem << " " << endl;
    } else {
    cout << " khong co phan tu " << endl;
    }
    cout << " so phan tu am " << soAm << " ";
    cout << endl;
    return 0;
    }
    
    
    
    
    
    
              