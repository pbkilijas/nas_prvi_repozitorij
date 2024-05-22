#include<iostream>
#include<ctime>
#include<cstdlib>

/**


*/

using namespace std;

int main() {
    const int N = 10;
    int niz[N];

    srand(time(NULL));

    cout << "Originalan niz" << endl;
    // generisati niz
    for(int i = 0; i < N; i++) {
        niz[i] = rand() % 100;
    }

    for(int i = 0; i < N; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < N; i++) {
        int minimum = i;
        for(int j = i + 1; j < N; j++) {
            if(niz[j] < niz[minimum]) {
                minimum = j;
            }
        }
        int temp = niz[i];
        niz[i] = niz[minimum];
        niz[minimum] = temp;
    }

    cout << "Sortiran niz: " << endl;
    for(int i = 0; i < N; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;


    return 0;
}
