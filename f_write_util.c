#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "assembly.txt"

// type = 0 : adresse mémoire
// type = 1 : valeur immédiate

void f_write(const char *op, int dest, int type1, int op1, int type2, int op2) {
    FILE *f = fopen(FILE_NAME, "a");
    if (!f) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(1);
    }

    char line[100];
    char comment[200] = "; ";

    // Instruction AFC : mémoire[dest] = valeur ou mémoire[op2]
    if (strcmp(op, "AFC") == 0) {
        snprintf(line, sizeof(line), "AFC %d %d", dest, op2);
        if (type2 == 1)
            snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                     "mémoire[%d] = %d", dest, op2);
        else
            snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                     "mémoire[%d] = mémoire[%d]", dest, op2);
    }
    // Instruction COP : mémoire[dest] = mémoire[op1]
    else if (strcmp(op, "COP") == 0) {
        snprintf(line, sizeof(line), "COP %d %d", dest, op2);
        snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                 "mémoire[%d] = mémoire[%d]", dest, op2);
    }
    // Instructions à 3 opérandes : ADD, SUB, MUL, DIV
    else if (strcmp(op, "ADD") == 0 || strcmp(op, "SUB") == 0 ||
             strcmp(op, "MUL") == 0 || strcmp(op, "DIV") == 0 || 
             strcmp(op, "EQU") == 0 || strcmp(op, "INF") == 0 ||
             strcmp(op, "INFE") == 0 || strcmp(op, "SUP") == 0 ||
             strcmp(op, "SUPE") == 0 || strcmp(op, "AND") == 0 ||
             strcmp(op, "NEQ") == 0 ) {
        snprintf(line, sizeof(line), "%s %d %d %d", op, dest, op1, op2);
        snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                 "mémoire[%d] = ", dest);

        if (type1 == 1)
            snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment), "%d", op1);
        else
            snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment), "mémoire[%d]", op1);

        snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment), " %s ", op);

        if (type2 == 1)
            snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment), "%d", op2);
        else
            snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment), "mémoire[%d]", op2);
    }
    // Instruction PRINT
    else if (strcmp(op, "PRINT") == 0) {
        snprintf(line, sizeof(line), "PRINT");
        snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment), "affiche la mémoire");
    }
    else {
        fprintf(stderr, "[ERROR] Opération non supportée : %s\n", op);
        fclose(f);
        return;
    }

    fprintf(f, "%-20s %s\n", line, comment);
    fclose(f);
}
