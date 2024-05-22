#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

/**
    Napisati program koji æe generisati niz od 36 clanova
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

    for(int i = 0; i < N; i++) {
        niz[i] = rand() % 20 + 1;
    }

    for(int i = 0; i < N; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < N; i++) {
        bool is_unique = true;
        for(int j = 0; j < N; j++) {
            if(i != j && niz[i] == niz[j]) {
                is_unique = false;
            }
        }

        if(is_unique) {
            cout << niz[i] << " ";
        }
    }

    cout << endl;


    return 0;
}
