#include<iostream>

using namespace std;

/**
    Napisati program koji trazi od korisnika unos cijelih brojeva
    sve dok ne unese 0.

    Pretpostaviti da korisnik neæe unijeti više od 15 elemenata.

    Program raèuna od poèetka do kraja niza sljedeæe osobine:

    a) Sumu brojeva
    b) Proizvod zadnjih cifara brojeva
    c) Broj brojeva koji imaju vise od tri cifre
    d) Broj prostih brojeva
*/

bool je_prost(int k) {
    if(k <= 1)
        return false;

    for(int i = 2; i < k; i++) {
        if(k % i == 0)
            return false;
    }

    return true;
}

int main() {
    int niz[15]; /// Kapacitet
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

    /// suma niza
    int suma = 0;
    int proizvod_zadnjih_cifara = 1;
    int broj_brojeva_sa_3_cifre = 0;
    int prosti_brojevi = 0;
    for(int i = 0; i < n; i++) {
        suma += niz[i];
        proizvod_zadnjih_cifara *= niz[i] % 10;

        if(niz[i] / 1000 != 0) {
            broj_brojeva_sa_3_cifre += 1;
        }

        if(je_prost(niz[i])) {
            prosti_brojevi += 1;
        }
    }

    cout << suma << endl;
    cout << proizvod_zadnjih_cifara << endl;
    cout << broj_brojeva_sa_3_cifre << endl;
    cout << prosti_brojevi << endl;


    return 0;
}
