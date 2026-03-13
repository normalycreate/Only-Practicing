#include <iostream>
using namespace std;

class perhitunganAngkaGenap {
public:
    static int pengecekanGenap(int angkaGenap) {
        return angkaGenap % 2;
    }
};

int main() {
    int angka;
    cout << "Masukan angka yang ingin anda hitung : ";
    cin >> angka;
    int hasil = perhitunganAngkaGenap::pengecekanGenap(angka);
    if (hasil == 0) {
        cout << "Angka dari " << angka << " Adalah genap karena hasilnya " << hasil << endl;
    } else {
        cout << "Angka dari " << angka << " Adalah ganjil karena hasilnya " << hasil << endl;
    }
}
