#include<iostream>

using namespace std;

/**
    Neka korisnik unese prirodan broj n, pri cemu se odredjuje
    n clanova niza. Niz se generise tako sto:

    Za svaku poziciju niza, pocevsi od 1, izracunati broj djelilaca broja i,
    pri cemu i je indeks niza - 1.

    Pretpostaviti da ce korisnik unijeti n manje od 1000.

    Ispisati niz od n clanova ovih brojeva djelilaca
*/

int broj_djelilaca(int k) {
    /**Eulerova funkcija*/
    int brojac = 0;

    for(int i = 1; i <= k; i++) {
        if(k % i == 0)
            brojac++;
    }

    return brojac;
}

int main() {
    int niz[1000];

    int n;
    cout << "Unesite n: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        niz[i] = broj_djelilaca(i + 1);
    }

    for(int i = 0; i < n; i++) {
        cout << niz[i] << " ";
    }

    cout << endl;

    return 0;
}
