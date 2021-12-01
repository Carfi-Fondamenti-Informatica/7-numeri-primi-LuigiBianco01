#include "lib.h"

bool funzione(char carattereinserito){
    char caratterestampa;
    bool risultato;
    if (carattereinserito>=65&&carattereinserito<=90 or carattereinserito>=97&&carattereinserito<=122){
        risultato=true;
    } else {
        risultato=false;
    }
    return risultato;
}
