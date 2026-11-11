#include <iostream>
#include <cmath>
using namespace std;

bool hoanhao(int x) {
    if (x <= 1) return false;
    int sum = 0;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }
    return sum == x;
}

bool chinhphuong(int x) {
    if (x < 0) return false;
    int can = sqrt(x);
    return can * can == x;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }
    cout << "\na. Gia tri lon nhat: " << maxVal << endl;
    cout << "   Vi tri lon nhat: ";
    for (int i = 0; i < n; i++) {
        if (a[i] == maxVal) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "\nb. So hoan hao: ";
    for (int i = 0; i < n; i++) {
        if (hoanhao(a[i])) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    cout << "\nc. So chinh phuong: ";
    for (int i = 0; i < n; i++) {
        if (chinhphuong(a[i])) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
