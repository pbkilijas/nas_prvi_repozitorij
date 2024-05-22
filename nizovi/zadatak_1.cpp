#include<iostream>

using namespace std;

/**
    Napisati program koji ce traziti od korisnika
    unos prirodnog broja n, a zatim traziti od korisnika
    unos n brojeva. Ispisati ovaj niz brojeva:

    a) u redoslijedu unosa brojeva
    b) u obrnutom redoslijedu unosa brojeva
    c) (IZAZOV) u rastucem poretku brojeva

    Pretpostavimo da uneseno n ne moze biti veci od 25.
    Ukoliko korisnik unese vise od 25 ili manje od 0, onda je
    n jednako 25.
*/

int main() {

    int arr[25]; // DEKLARACIJA NIZA; 25 je kapacitet niza

    int n;
    cout << "Unesite n: ";
    cin >> n;

    for(int i = 0; i < n; i++) { /// DUZINA NIZA je n
        cin >> arr[i]; /// UNOS NIZA za indeks i
        /// indeksi idu od 0 do (n - 1)
    }

    /// ISPISIVANJE PO REDOSLIJEDU
    cout << "Redoslijed" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; /// ISPIS NIZA putem indeksiranja
    }
    cout << endl;

    /// ISPISIVANJE PO OBRNUTOM REDOSLIJEDU
    cout << "Obrnuti redoslijed" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[n - 1 - i] << " "; /// ISPIS NIZA putem indeksiranja
    }

    cout << endl;

    /// ISPISIVANJE U RASTUCEM PORETKU
    cout << "Obrnuti redoslijed" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[n - 1 - i] << " "; /// ISPIS NIZA putem indeksiranja
    }

    cout << endl;

    /*arr[0] = 38;
    arr[1] = 95;
    arr[15] = 85;

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[15] << endl;*/

    return 0;
}
