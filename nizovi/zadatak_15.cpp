#include<iostream>

using namespace std;

/**
    Neka korisnik unese prirodan broj n.
    Zatim, program generise niz od n clanova
    takvih da je razlika izmedju susjednih clanova 5 pocevsi od k,
    pri cemu k korisnik unosi.

    Pretpostaviti da n nece biti veci od 500.
    Zatim, izracunati sumu ovog niza, te ispisati i niz i sumu.

    Primjer
    --------

    n = 7
    k = 1

    1 6 11 16 21 26 31
*/

int main() {
    int n, k;
    cout << "Unesite n: ";
    cin >> n;

    cout << "Unesite k: ";
    cin >> k;

    int niz[500];

    for(int i = 0; i < n; i++) {
        niz[i] = k;
        k += 5;
    }


    int suma = 0;
    for(int i = 0; i < n; i++) {
        cout << niz[i] << " ";
        suma += niz[i];
    }

    cout << endl;
    cout << suma << endl;

    return 0;
}
