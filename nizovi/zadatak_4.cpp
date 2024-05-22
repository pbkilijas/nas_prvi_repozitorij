#include<iostream>

using namespace std;

/**
    Napisati program koji trazi od korisnika unos cijelih brojeva
    sve dok ne unese 0.

    Program ispisuje po redu unesene brojeve u konzoli u jednom redu.
    Pretpostaviti da korisnik neæe unijeti više od 128 elemenata.
*/

int main() {
    int niz[128]; /// Kapacitet
    int n = 0; /// Duzina niza

    /// unos niza
    int k = 1;
    while(k != 0) {
        cin >> k;
        if(k != 0) {
            niz[n] = k;
            n += 1;
        }
    }

    /// ispis niza
    for(int i = 0; i < n; i++) {
        cout << niz[i] << " "; /// indeksiranje
    }


    return 0;
}
