#include<iostream>

using namespace std;

int main() {
    int n=0;
    int max=0;

    do {
    cout << "Masukkan bilangan (masukkan 0 untuk berhenti): ";
    cin >> n;

    if (n > max)
        max = n;
    } while (n != 0);

    cout << "Bilangan terbesar adalah " << max;

}
