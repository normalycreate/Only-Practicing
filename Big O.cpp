#include <vector>
#include <iostream>
using namespace std;

//Ini adalah contoh dari O(1)
class upperOrderContoh {
    public:
        static int dapatkanElemenPertama(const vector<int>& arr) {
            return arr[0];
        }
};

int main() {
    vector<int> angka = {23,54,67,89,99};
    int pertama = upperOrderContoh::dapatkanElemenPertama(angka);
    cout << "Elemen pertama adalah " << pertama << endl;
    return 0;
}