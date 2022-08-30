#include<iostream>
using namespace std;
int main()

{
    int sum, i, j;
    int cart[4][2] = {
        {3000, 1},
        {1000, 4},
        {7000, 1},
        {5000, 1},
    };

    cout << "Baris 2, kolom 1 : " << cart[1][0];

    for (i = 0; i < 4; ++i){
        for (j = 0; j < 2; ++j){
            sum += cart[i][j];
        }
    }

    cout << "\nHasil Jumlah : " << sum;

    return 0;
}