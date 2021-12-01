#include <iostream>
using namespace std;
#include "lib.h"

int main() {
    int b=0;
    cin >> b;
    int a=2;
    if (funzione (a, b ) == true){
        cout << "numero primo";
    } else if (funzione (a, b)== false){
        cout << "numero non primo";
    }
    return 0;
}
