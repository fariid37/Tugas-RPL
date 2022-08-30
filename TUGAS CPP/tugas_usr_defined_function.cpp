#include <iostream>
using namespace std;

void ulang(string UwU, int angka = 0)
{
    if (angka == 0)
    {
        cout << UwU;
    }
    else
    {
        for (int i = 0; i < angka; i++)
        {
            cout << UwU;
        }
    }
}
main()
{
    ulang("UwU\n");
    ulang("UwU", 10);
    return 0;
}