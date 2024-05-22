#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

/**
    Napisati program koji æe generisati niz od 64 èlana
    sa nasumiènim cjelobrojnim vrijednostima od 1 do 64 ukljuèeno.
    Dozvoljena je duplikacija brojeva. Zatim, generisani niz ispisati
    u konzoli.
*/

int main() {
    srand(time(NULL));

    const int N = 64;
    int niz[N];

    for(int i = 0; i < N; i++) {
        niz[i] = rand() % 64 + 1;
    }

    for(int i = 0; i < N; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;


    return 0;
}
