#include<iostream>
using namespace std;

double luas_segitiga(double alas, double tinggi) {
    return 0.5 * alas * tinggi;
}
int main() {
    cout << "luas segitiga dengan alas 7 dan tinggi 8 = " << luas_segitiga(7,8);
    return 0;
}