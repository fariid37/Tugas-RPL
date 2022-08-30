#include<iostream>
using namespace std;

int main() {
    int n[10], jumlah=0;
    for (int i=0; i<10; i++) {
        cout << "masukan nilai ke-" << i+1 << ": ";
        cin >> n[i];
        jumlah += n[i];

    }
    cout << "jumlah seluruh nilai adalah: " << jumlah;
    return 0;
}