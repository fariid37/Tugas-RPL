#include <iostream>
using namespace std;
int main() {
    int angka;
    awal:
    cout << "Masukkan Angka : ";
    cin >> angka;
    if(angka >= 0 && angka <= 100){
        if(angka >= 95){
            cout << "HURUF A" << endl;
            cout << "Keterangan : Amat Baik" << endl;
        }else if(angka >= 85){
            cout << "MESTI HASIL CONTEKAN NILAI APIK KOYO NGENE !" << endl;
        }else if(angka >= 75){
            cout << "SEMANGAT, BENTAR LAGI DAPAT SEPEDA" << endl;
        }else if(angka >= 65){
            cout << "KURANG SEMANGAT,MESTI URUNG DISEMANGATI KARO AYANG" << endl;
        }else{
            cout << "RANEK HARAPAN !" << endl;
        }
    }else{
        cout << "Angka anda kurang/melebihi batas silahkan ulangi" << endl;
        goto awal;
    }
    return 0;
}
