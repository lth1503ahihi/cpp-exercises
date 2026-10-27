#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Nhap so: ";
    cin >> a;

    // a. Kiem tra chan hay le
    if (a % 2 == 0)
    {
        cout << "Day la so chan" << endl;
    }
    else
    {
        cout << "Day la so le" << endl;
    }

    // b. Kiem tra am, duong hay so 0
    if (a < 0)
    {
        cout << "Day la so am" << endl;
    }
    else if (a > 0)
    {
        cout << "Day la so duong" << endl;
    }
    else
    {
        cout << "Day la so 0" << endl;
    }

    // c. Tach chu so dau va cuoi (neu a co 3 chu so)
    if ((a >= 100 && a <= 999) || (a <= -100 && a >= -999))
    {
        int x = a;
        if (x < 0)
        {
            x = -x; // Doi so am sang duong de lay chu so
        }

        int dau = x / 100;
        int cuoi = x % 10;

        cout << "Chu so dau la: " << dau << endl;
        cout << "Chu so cuoi la: " << cuoi << endl;
    }

    return 0;
}
