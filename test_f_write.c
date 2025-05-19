#include <stdio.h>
#include "f_write_util.h"
// Déclaration

int main() {
    // Nettoie le fichier
    FILE *f = fopen("assembly.txt", "w");
    if (f) fclose(f);

    f_write("LOAD", 0, 0, 0, 1, 10); // mémoire[0] = 10
    f_write("LOAD", 1, 0, 0, 1, 20); // mémoire[1] = 20
    f_write("ADD",  2, 0, 0, 0, 1);  // mémoire[2] = mémoire[0] + mémoire[1]
    f_write("SUB",  3, 0, 2, 0, 1);  // mémoire[3] = mémoire[2] - mémoire[1]
    f_write("MUL",  4, 0, 3, 0, 0);  // mémoire[4] = mémoire[3] * mémoire[0]
    f_write("DIV",  5, 0, 4, 0, 1);  // mémoire[5] = mémoire[4] / mémoire[1]
    f_write("PRINT", 0, 0, 0, 0, 0); // affiche la mémoire

    return 0;
}
