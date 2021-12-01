#include "lib.h"

bool funzione (int a, int b){
    bool esito;
    if(b % a != 0 && b>a) {
        funzione(a + 1, b);
    } else if (b % a == 0 && b > a ){
        return esito =  false ;
    } else {
        return esito = true ;
    }
}
