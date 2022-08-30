#include <iostream>
using namespace std;
int diskon(int angka)
{
    return 0.1 * angka;
}
int main()
{
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    cout << diskon(10000);
    return 0;
}