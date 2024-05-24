#include<iostream>

using namespace std;

/**
    Kazemo da je niz palindroman ukoliko se niz ne mijenja ako se obrne poredak niza.
    Primjer palindromnog niza je

    1,2,3,4,3,2,1

    A primjer niza koji nije palindroman je

    1,2,3,4,4,3,4,2,1

    Napisati C++ program koji æe tražiti od korisnika unos prirodnih brojeva sve dok ne unese 0.
    Pretpostavimo da korisnik neæe unijeti više od 10 elemenata. Zatim, program ispisuje
    da li je korisnik unio palindroman niz ili nije.
*/

int main() {

    int niz[10];
    int duzina = 0;

    int temp = 1;
    while(duzina < 10 && temp != 0) {
        cin >> temp;

        if(temp != 0) {
            niz[duzina] = temp;
            duzina += 1;
        }
    }

    /// Ideja 1: Napraviti obrnuti niz
    int obrnuti_niz[10];
    for(int i = 0; i < duzina; i++) {
        obrnuti_niz[i] = niz[duzina - 1 - i];
    }

    for(int i = 0; i < duzina; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < duzina; i++) {
        cout << obrnuti_niz[i] << " ";
    }
    cout << endl;

    bool je_palindroman = true;
    for(int i = 0; i < duzina; i++) {
        if(niz[i] != obrnuti_niz[i])
            je_palindroman = false;
    }

    if(je_palindroman) {
        cout << "Palindrom" << endl;
    } else {
        cout << "Nije palindrom" << endl;
    }


    /// Ideja 2: Ispitati pomocu indeksa da li je niz palindroman
    bool je_palindroman2 = true;
    for(int i = 0; i < duzina; i++) {
        if(niz[i] != niz[duzina - 1 - i]) {
            je_palindroman2 = false;
        }
    }

    if(je_palindroman2) {
        cout << "Palindrom" << endl;
    } else {
        cout << "Nije palindrom" << endl;
    }


    return 0;
}
