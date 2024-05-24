#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

/**
    Napisati program koji ce generisati niz od 36 clanova
    sa nasumicnim vrijednostima od 1 do 20 ukljuceno.
    Dozvoljena je duplikacija brojeva. Zatim, ispisati u konzoli
    sve brojeve koji NISU duplicirani u nizu.
*/

/**
    4, 3, 2, 7, 4, 7

    3, 2
*/

int main() {
    srand(time(NULL));

    const int N = 36;
    int niz[N];

    // postavka za brojace
    int brojaci[20];
    for(int i = 0; i < 20; i++) {
        brojaci[i] = 0;
    }

    for(int i = 0; i < N; i++) {
        niz[i] = rand() % 20 + 1;
    }

    for(int i = 0; i < N; i++) {
        cout << niz[i] << " ";
        brojaci[niz[i] - 1] += 1;
    }
    cout << endl;

    for(int i = 0; i < N; i++) {
        if(brojaci[niz[i] - 1] == 1) {
            cout << niz[i] << " ";
        }
    }
    cout << endl;


    return 0;
}
