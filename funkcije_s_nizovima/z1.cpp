#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

/**
    Napisati program koji trazi od korisnika unos prirodnog broja n.
    Zatim, program generise niz od nasumicnih elemenata u rasponu
    od 1 do 100. Pretpostavite da n <= 1000.

    Napraviti sljedece funkcije:
        - maksimum_niza
        - aritmeticka_sredina
        - sortiraj_niz
    koji ce primiti ovaj niz i vratiti vrijednosti koje se traze po imenu funkcija.

*/

void ispisi_niz(int arr[], int length) {
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int maksimum(int niz[], int n) {
    int maks = niz[0];

    for(int i = 0; i < n; i++) {
        if(niz[i] > maks)
            maks = niz[i];
    }

    return maks;
}

double aritmeticka_sredina(int niz[], int n) {
    int suma = 0;

    for(int i = 0; i < n; i++) {
        suma += niz[i];
    }

    return 1.0 * suma / n;
}

/**
 a) 15 -
 b) 1000 - |
 c) Nista od navedeno -  |
*/


int funkcija(int a) {
    a = 1000;
    return a;
}

int main() {
    int klasik = 15;
    funkcija(klasik);
    cout << klasik << endl;

    /**
    srand(time(NULL));

    int niz[1000];
    int n;

    cout << "Unesite n: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        niz[i] = rand() % 100 + 1; /// 1 - 100
    }

    ispisi_niz(niz, n);

    ispisi_niz(niz, n);
    cout << maksimum(niz, n) << endl;
    cout << aritmeticka_sredina(niz, n) << endl;*/

    return 0;
}


/// sortiranje niza
    /** Primjer
        5, 2, 4, 3, 8, 9, 0, 1

        0| 2, 4, 3, 8, 9, 5, 1

        0, 1| 4, 3, 8, 9, 5, 2

        0, 1, 2, 3| 8, 9, 5
        0, 1, 2, 3, 5|, 9, 8
        0, 1, 2, 3, 5, 8, 9

    for(int i = 0; i < n; i++) {
        int minimum_idx = i;
        for(int j = i + 1; j < n; j++) {
            if(niz[j] < niz[minimum_idx]) {
                minimum_idx = j;
            }
        }

        int temp = niz[i];
        niz[i] = niz[minimum_idx];
        niz[minimum_idx] = temp;
    }*/
