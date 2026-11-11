#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int chon = -1;
    while (chon != 0) {
        cout << "\n1.Xuat  2.Sap xep  3.Tim  4.Them  5.Xoa  0.Thoat -> Chon: ";
        cin >> chon;

        if (chon == 1) {
            for (int i = 0; i < n; i++) cout << a[i] << " ";
            cout << endl;
        } 
        else if (chon == 2) {
            for (int i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (a[i] < a[j]) {
                        int tmp = a[i]; a[i] = a[j]; a[j] = tmp;
                    }
                }
            }
            cout << "Da sap xep xong.\n";
        } 
        else if (chon == 3) {
            int x, co = 0;
            cout << "Nhap x: "; cin >> x;
            cout << "Vi tri: ";
            for (int i = 0; i < n; i++) {
                if (a[i] == x) { cout << i << " "; co = 1; }
            }
            if (!co) cout << "Khong co";
            cout << endl;
        } 
        else if (chon == 4) {
            int val, pos;
            cout << "Gia tri va vi tri chen: ";
            cin >> val >> pos;
            for (int i = n; i > pos; i--) a[i] = a[i - 1];
            a[pos] = val;
            n++;
        } 
        else if (chon == 5) {
            int pos;
            cout << "Vi tri muon xoa: ";
            cin >> pos;
            for (int i = pos; i < n - 1; i++) a[i] = a[i + 1];
            n--;
        }
    }
    return 0;
}
