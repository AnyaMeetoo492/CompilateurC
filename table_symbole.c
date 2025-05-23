#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "table_symbole.h"

symbol * table_symbol[255] = {NULL};

int nb_symbol = 0;

// Index du temporaire
int temp_index = 254;

int compare_symbol(const symbol* sym1, const symbol* sym2) {

    // si les deux symboles sont vides
    if (sym1 == NULL && sym2 == NULL){
        return 1;
    }
    
    if (sym1 == NULL || sym2 == NULL){
        return 0;
    }

    // si le nom correspond
    if (sym1->name != NULL && sym2->name != NULL && 
        strcmp(sym1->name, sym2->name) != 0){
        return 0;
    }

    // si tout le reste correspond
    if (sym1->type != sym2->type || 
        sym1->scope != sym2->scope || 
        sym1->initialised != sym2->initialised ||   
        sym1->dtype != sym2->dtype ||
        sym1->value != sym2->value){
        return 0;
    }
    
    // si tout est valide, c'est good
    return 1;
}

int get_index(const symbol* sym) {
    for (int i = 0; i < ARRAYSIZE(table_symbol); i++) {
        
        if (compare_symbol(table_symbol[i], sym)) {
            return i;
        }
    }
    return -1;
}

// Récupérer un symbole
symbol * get_symbol(int index) {
    if (index >= 0 && index < ARRAYSIZE(table_symbol) && table_symbol[index] != NULL) {
        return table_symbol[index];
    }
    return NULL;
}

// Ajouter un symbole
void add_symbol(symbol* sym) {
    int i = get_index(NULL); // trouve un espace vide

    if (i >= 0 && i < ARRAYSIZE(table_symbol)) {
        table_symbol[i] = sym;
    }
    
}

// Ajouter un symbole temporaire
void add_tmp(symbol* sym) {
    if (temp_index >= 0) {
        table_symbol[temp_index] = sym;
        temp_index--;
    }
}

// Retirer un symbole
void remove_symbol(symbol* sym) {
    int i = get_index(sym);
    if (i >= 0) {
        //free(table_symbol[i]);
        table_symbol[i] = NULL;
    }
}

// Retirer un symbole temporaire
void remove_tmp() {
    if (temp_index < ARRAYSIZE(table_symbol) - 1) {
        table_symbol[temp_index + 1] = NULL;
        temp_index++;
    }
}

// Modifier un symbole
void modify_symbol(symbol* sym, symbol* new_sym) {
    int i = get_index(sym);
    if (i >= 0) {
        table_symbol[i] = new_sym;
    }
}


void print_table(){
    printf("=======================================================================\n");
    printf("|                    SYMBOL TABLE, TABLE SIZE = %ld                    |\n", ARRAYSIZE(table_symbol));
    printf("=======================================================================\n");
    printf("| index |    type     | scope | datatype | initialised | name | values |\n");

    for (int i = 0; i < ARRAYSIZE(table_symbol); i++) {
        symbol * s = get_symbol(i);


        if (!compare_symbol(s, NULL)){

            char * type;
            char * scope;
            char * datatype; 
            char * initialised;
            SYMBOLTYPE2STR(s->type, type);
            SCOPETYPE2STR(s->scope, scope);
            DATATYPE2STR(s->dtype, datatype);
            BOOLTYPE2STR(s->initialised, initialised);

            printf("| %5d | %11s | %5s | %8s | %11s | %4s | %6d |\n",
                i, 
                type, 
                scope, 
                datatype, 
                initialised, 
                s->name, 
                s->value
            );

        }
    }

    printf("=======================================================================\n");

} 

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
    //symbol sym ={$1,VARIABLE}
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
