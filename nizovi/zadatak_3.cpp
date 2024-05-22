#include<iostream>

/**
    Napisati program koji ce traziti od korisnika unos realnih brojeva
    sve dok ne unese 0. Ispisati najduzi podniz pozitivnih realnih brojeva
    koji se nalaze izmedju dva negativna broja u nizu.
    Pretpostavimo da korisnik nece unijeti vise od 50 elemenata.

*/

using namespace std;

int main() {
    const int N = 50;
    double niz[N];
    int negativni_brojevi_lokacija[N];

    int broj_clanova = 0;
    double clan = 1;

    while(clan != 0 && broj_clanova < N){
        cin >> clan;

        if(clan != 0) {
            niz[broj_clanova] = clan;
            broj_clanova++;
        }
    }

    cout << "Ispis niza" << endl;
    for(int i = 0; i < broj_clanova; i++) {
        cout << niz[i] << " ";
    }

    cout << endl;


    int broj_negativnih = 0;
    for(int i = 0; i < broj_clanova; i++) {
        if(niz[i] < 0) {
            negativni_brojevi_lokacija[broj_negativnih] = i;
            broj_negativnih += 1;
        }
    }

    cout << "Negativni brojevi lokacija: " << endl;
    for(int i = 0; i < broj_negativnih; i++) {
        cout << negativni_brojevi_lokacija[i] << " ";
    }
    cout << endl;

    int interval_1 = -1;
    int interval_2 = -1;

    for(int i = 0; i < broj_negativnih - 1; i++) {
        int udaljenost = negativni_brojevi_lokacija[i + 1] - negativni_brojevi_lokacija[i] - 1;
        int udaljenost_intervala = interval_2 - interval_1 - 1;
        if(udaljenost > udaljenost_intervala) {
            interval_1 = negativni_brojevi_lokacija[i];
            interval_2 = negativni_brojevi_lokacija[i + 1];
        }
    }

    for(int i = interval_1; i < interval_2; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;



    return 0;
}
