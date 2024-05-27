#include<iostream>

using namespace std;

/**
    Neka korisnik unosi prirodan broj n.
    Zatim, generisati niz od n parnih brojeva
    pocevsi od k, pri cemu k korisnik unosi.
    Ukoliko je k neparan broj, uraditi od k + 1.

    Pretpostaviti da ne moze n biti veci od 300.
    Ispisati ovaj novogenerisani niz.

    Primjer
    -------
    n=5
    k=3

    4 6 8 10 12
*/

int main() {
    int niz[300]; /// kapacitet - 300

    int n, k;

    cout << "Unesite n: ";
    cin >> n;

    cout << "Unesite k: ";
    cin >> k;

    if(k % 2 != 0)
        k += 1;

    for(int i = 0; i < n; i++) {
        niz[i] = k;
        k += 2;
    }

    for(int i = 0; i < n; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;

    return 0;
}
