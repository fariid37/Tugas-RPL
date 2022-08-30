#include<iostream>
#include <time.h>
using namespace std;

int main() {
    srand (time(NULL));
    int n[10];
    for(int i=0; i<10; i++) {
        n[i] = rand() % 20; 
        cout << n[i] << "\t";
    }
    return 0;
}