#include<iostream>

using namespace std;

/**
    U C++ napraviti niz od sljedeæih elemenata:

    1, 2, 5, 8, 13, 15, 17, 19, 23

    Ispisati svaki drugi clan ovog niza.
*/

int main() {
    const int N = 9;
    int niz[] = {1, 2, 5, 8, 13, 15, 17, 19, 23};
    /// Inicijalizacija niza

    for(int i = 0; i < N; i += 2) {
        cout << niz[i] << " ";
    }
    cout << endl;

    return 0;
}
