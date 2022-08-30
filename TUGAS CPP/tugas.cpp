#include <iostream>
using namespace std;
int main() {
    /** By Singgih Dwi Budiarto
    And Saudara
    **/
    int angka;
    string grade, keterangan, ulang;
    cout << "By Singgih Dwi Budiarto And Saudara" << endl;
    awal:
    cout << "Masukkan Angka : ";
    cin >> angka;
    if(angka >= 0 && angka <= 100){
        if(angka >= 95){
            grade = "A";
            keterangan = "Amat Baik";
        }else if(angka >= 85){
            grade = "B";
            keterangan = "Baik";
        }else if(angka >= 75){
            grade = "C";
            keterangan = "Cukup Baik";
        }else if(angka >= 65){
            grade = "D";
            keterangan = "Cukup";
        }else{
            grade = "E";
            keterangan = "Kurang";
        }

        cout << "Grade anda : " << grade << endl;
        cout << "Keterangan : " << keterangan << "\n\n";

        cout << "Apakah anda ingin mengulangi program ? Y/N : ";
        cin >> ulang;
        if(ulang == "Y" || ulang == "y"){
            goto awal;
        }else{
            return 0;
        }
    }else{
        cout << "Angka anda kurang/melebihi batas silahkan ulangi" << endl;
        goto awal;
    }
    return 0;
}
