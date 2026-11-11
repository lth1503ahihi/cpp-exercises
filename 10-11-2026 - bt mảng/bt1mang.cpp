#include<iostream>
using namespace std;

int main (){
    int n;
    cout << " Nhap n : ";
    cin >> n;
    int a[n];
    for ( int i=0;i<n;i++) {
         cin >> a[i];
         }
    int tongam=0;
    int demam=0;
    for ( int i=0;i<n;i++) {
    if ( a[i] < 0){
    tongam+=a[i];
    demam++;
    }
    }
    cout << "\na. Trung binh cong so am\n ";
    if (demam>0){
    cout << (float)tongam/demam << endl;
    } else {
    cout << "\nKhong co so am\n";
    }
    cout << "\nb. Chia het cho 5 \n";
    for (int i=0; i<n;i++) {
    if ( a[i]%5==0 ) {
    cout << a[i] << " ";
    }
    }
    cout << endl;
    cout << "\nc. Sap xep giam dan \n";
    for ( int i=0;i<n;i++){
    for ( int j=i+1; j<n; j++) {
    if ( a[i] < a[j] ) {
    int tmp = a[i];
    a[i]=a[j];
    a[j]=tmp;
    }
    }
    }
    cout << "\nMang sau khi sap xep\n ";
    for ( int i=0;i<n-1;i++){
    cout << a[i] << " ";
    }
    cout << endl;
    return 0;
    }
    