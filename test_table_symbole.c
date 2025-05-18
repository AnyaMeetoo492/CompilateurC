#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "table_symbole.h"
void main(){

    symbol sym = {
        "a",
        VARIABLE, 
        LOCAL,
        1,
        25,
        INT
    };

    symbol sym2 = {
        "b",
        VARIABLE, 
        LOCAL,
        1,
        25,
        INT
    };

    symbol sym3 = {
        "c",
        VARIABLE, 
        LOCAL,
        1,
        25,
        INT
    };

    add_tmp(&sym3);

    remove_tmp();

    add_tmp(&sym3);
    add_tmp(&sym2);

    remove_tmp();

    add_symbol(&sym);
    remove_symbol(&sym);
    add_symbol(&sym);

    print_table();

}
