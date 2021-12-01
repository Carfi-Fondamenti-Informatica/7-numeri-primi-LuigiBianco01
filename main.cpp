#include <iostream>
using namespace std;
#include "lib.h"

int main() {
    char carattereinserito;
    char caratterestampa;

    cin >> carattereinserito;

    if (funzione(carattereinserito)==true){
        if (carattereinserito>=65&&carattereinserito<=90) {
            caratterestampa = carattereinserito + 32;
        } else {
            caratterestampa = carattereinserito - 32;
        }
        cout << caratterestampa;
    } else {
        cout << "errore";
    }
    return 0;

}
