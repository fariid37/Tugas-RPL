#include<iostream>
using namespace std;
int main() {
    // dekklarasi + inisialisasi
    int harga[4] = {3000,1000 , 7000, 5000};
    harga[2] = 7500; // mengubah nilai array
    // menampilkan nilai ke-3 pada array (index 2)
    cout << harga[2] << endl;
    return 0;
}    