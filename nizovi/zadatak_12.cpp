#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

/**
    Napisati program koji trazi od korisnika unos prirodnog broja n.
    Program, zatim, generiše niz od n prirodnih brojeva vece ili jednako 1.
    Pretpostavite da korisnik unijeti n u segmentu [25, 2500].
    Prirodni brojevi se generišu u segmentu [1, 10000].
    Ne mogu se ponavljati brojevi.

    Zatim, program ispisuje sve parove prirodnih brojeva koji su
    uzajamno prosti. Kazemo da su brojevi a, b uzajamno prosti
    ukoliko njihov NZD(a, b) = 1.
    Ispisivanje parova se ne smije ponavljati
    (npr. (1,3) i (3, 1) je isti par).

*/

int nzd(int a, int b) {
    int minimum = a;
    if(minimum > b) {
        minimum = b;
    }

    int djelilac = 1;
    for(int i = 2; i <= minimum; i++) {
        if(a % i == 0 && b % i == 0)
            djelilac = i;
    }

    return djelilac;
}

int main() {
    int n;
    cout << "Unesite n: ";
    cin >> n;

    srand(time(NULL));

    int niz[2500];
    int duzina = 0;

    while(duzina < n) {
        int temp = rand() % 10000 + 1;
        bool is_unique = true;

        for(int i = 0; i < duzina; i++) {
            if(temp == niz[i])
                is_unique = false;
        }

        if(is_unique) {
            niz[duzina] = temp;
            duzina += 1;
        }
    }

    for(int i = 0; i < duzina; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < duzina; i++) {
        for(int j = i + 1; j < duzina; j++) {
            if(nzd(niz[i], niz[j]) == 1)
                cout << niz[i] << ", " << niz[j] << endl;
        }
    }
    cout << endl;

    return 0;
}
