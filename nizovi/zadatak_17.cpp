#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

/**
    Napisati program koji ce probati generisati niz od 64 clana sa nasumicnim
    cjelobrojnim vrijednostima od 1 do 20 ukljuceno. Dozvoljena je duplikacija
    brojeva. Zatim, u konzoli ispisati sve generisane brojeve unikatno i
    ispisati koliko puta su se pojavili u nizu.
*/

int main() {
    srand(time(NULL));

    const int N = 64;
    int niz[N];

    for(int i = 0; i < N; i++) {
        niz[i] = rand() % 20 + 1;
    }

    for(int i = 0; i < N; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;

    int brojac;
    for(int i = 1; i <= 20; i++) {
        brojac = 0;
        for(int j = 0; j < N; j++) {
            if(niz[j] == i) {
                brojac++;
            }
        }

        if(brojac > 0) {
            cout << i << " -> " << brojac << endl;
        }
    }


    return 0;
}
