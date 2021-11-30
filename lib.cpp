#include <iostream>
#include "lib.h"
char funzione (char a){
    if (isalpha(a)){
        return true;
    }else if (isdigit(a)){
        return false;
    }
}
