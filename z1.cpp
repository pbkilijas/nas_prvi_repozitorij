#include<iostream>

using namespace std;

int nzd(int a, int b) {
    int minimum = a;
    if(b < minimum) {
        minimum = b;
    }

    int djelioc = 1;

    for(int i = 2; i <= minimum; i++) {
        if(a % i == 0 && b % i == 0) {
            djelioc = i;
        }
    }

    return djelioc;
}

int main() {
    int a, b;
    cout << "Unesite a i b: ";
    cin >> a >> b;

    cout << "NZD(" << a << ", " << b << ") = " << nzd(a, b) << endl;

    return 0;
}
