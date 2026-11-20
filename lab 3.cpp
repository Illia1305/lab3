
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "UKRAINIAN");
    cout << "введiть a, b, c" << endl;
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
            if (b == 0) {
                if (c == 0)
                    cout << "безлiч розв'язкiв";
                else
                    cout << "розв'язкiв немає";
            }
            else {
                cout << "x=" << - c / b;
            }    
    }
    else {
        double d = b * b - 4 * a * c;
        if (d==0) {
            cout << -b / (2 * a);
        }
        else if (d < 0) {
            d = d / -1;
            cout << "x1=" << -b / (2 * a) << "+" << sqrt(d) / (2 * a) << "*i x2=" << -b / (2 * a) << "+" << sqrt(d) / (2 * a) << "*i";
        }
        else {
            cout << "x1=" << (-b + sqrt(d)) / (2 * a) << " x2=" << (-b + sqrt(d)) / (2 * a);
        }
        
    }

}

