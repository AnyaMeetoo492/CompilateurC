#include <stdio.h>
#include "f_write_util.h"
// Déclaration

int main() {
    // Nettoyer le fichier
    FILE *f = fopen("assembly.txt", "w");
    if (f) fclose(f);

    f_write("LOAD", 0, 0, 1, 10);   // mémoire[0] = 10
    f_write("LOAD", 0, 1, 1, 20);   // mémoire[1] = 20
    f_write("ADD",  0, 2, 0, 0);    // mémoire[2] = mémoire[0] + mémoire[0] (exemple)
    f_write("SUB",  0, 3, 0, 1);    // mémoire[3] = mémoire[3] - mémoire[1]
    f_write("MUL",  0, 4, 0, 0);    // mémoire[4] = mémoire[4] * mémoire[0]
    f_write("DIV",  0, 5, 0, 1);    // mémoire[5] = mémoire[5] / mémoire[1]
    f_write("PRINT", 0, 0, 0, 0);   // affiche la mémoire

    return 0;
}
