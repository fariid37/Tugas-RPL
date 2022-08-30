#include<iostream>
using namespace std;

void hello(string nama) {
    cout << "hello, " << nama;
}

int main () {
    string n;
    cout <<"siapa nama anda? ";
    getline(cin, n);
    hello(n);
    return 0;
}