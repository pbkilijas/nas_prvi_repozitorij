#include<iostream>

using namespace std;

void ispisi_niz(int arr[], int length) {
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void funkcija(int niz[], int n) {
    niz[0] = 10;
}

int main() {
    int niz[] = {1, 2, 3, 4, 5, 6};
    const int N = 6;
    funkcija(niz, N);
    ispisi_niz(niz, N);

    cout << niz << endl;

    return 0;
}
