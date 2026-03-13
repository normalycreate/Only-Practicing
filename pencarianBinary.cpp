#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int pencarianBinary(int angkaArray[], int panjang, int target) {
    int kiri = 0;
    int kanan = panjang - 1;
    while (kiri <= kanan) {
        int penengah = (kanan + kiri) / 2;
        if (angkaArray[penengah] == target) {
            return penengah;
        } else if (angkaArray[penengah] < target) {
            kiri = penengah + 1;
        } else {
            kanan = penengah - 1;
        }
    }
    return -1;
}

int main() {
    int angka[] = {2,4,6,7,9,12,34,56,78,134,654};
    int targetPencarian;
    cout << "Array : ";
    copy(begin(angka), end(angka), ostream_iterator<int>(cout, " "));
    cout << " " << endl;
    cin >> targetPencarian;
    int panjangArray = sizeof(angka) / sizeof(angka[0]);
    int hasilIndeks = pencarianBinary(angka, panjangArray, targetPencarian);
    if (hasilIndeks != -1) {
        cout << "Angka ditemukan pada indeks ke " << hasilIndeks << endl;
    } else {
        cout << "Angka tidak ditemukan." << endl;
    }
    return 0;
}