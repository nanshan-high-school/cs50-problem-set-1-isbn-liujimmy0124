#include <iostream>
using namespace std;

int main() {
    cout << "請輸入inbs";

    long long inbs; 
    cin >> inbs;

    int num9 = inbs / 10 % 10 * 9;

    int num8 = inbs / 10 / 10 % 10 * 8;

    int num7 = inbs / 10 / 10 / 10 % 10 * 7;

    int num6 = inbs / 10 / 10 / 10 / 10 % 10 * 6;

    int num5 = inbs / 10 / 10 / 10 / 10 / 10 % 10 * 5;

    int num4 = inbs / 10 / 10 / 10 / 10 / 10 / 10 % 10 * 4;

    int num3 = inbs / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10 * 3;

    int num2 = inbs / 10 / 10 / 10 / 10 / 10  / 10 / 10 / 10 % 10 * 2;

    int num1 = inbs / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10 * 1;

    int i = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9;

    int j = i % 11;

    int num10 = inbs % 10;

    if (j == num10) {
        cout << "yes";
    }

    if (j != num10) {
        cout << "no";
    }
}
