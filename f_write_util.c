#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "assembly.txt"

// type = 0 : adresse mémoire
// type = 1 : valeur immédiate

void f_write(const char *op, int type1, int operand1, int type2, int operand2) {
    FILE *f = fopen(FILE_NAME, "a");
    if (!f) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(1);
    }

    char line[100];
    char comment[100] = "; ";

    // Instruction à 1 opérande (ex: LOAD)
    if (strcmp(op, "LOAD") == 0) {
        snprintf(line, sizeof(line), "LOAD %d %d", operand1, operand2);
        if (type2 == 1) {
            snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                     "mémoire[%d] = %d", operand1, operand2);
        } else {
            snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                     "mémoire[%d] = mémoire[%d]", operand1, operand2);
        }
    }
    // Instructions à 3 opérandes (ex: ADD, SUB, etc.)
    else if (strcmp(op, "ADD") == 0 || strcmp(op, "SUB") == 0 ||
             strcmp(op, "MUL") == 0 || strcmp(op, "DIV") == 0) {
        snprintf(line, sizeof(line), "%s %d %d %d", op, operand1, operand2, type2 == 1 ? operand2 : operand2);
        snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                 "mémoire[%d] = ", operand1);
        if (type1 == 1)
            snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                     "%d", operand2);
        else
            snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                     "mémoire[%d]", operand2);

        snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                 " %s ", op);

        if (type2 == 1)
            snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                     "%d", operand2);
        else
            snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                     "mémoire[%d]", operand2);
    }
    // Instruction sans opérande (ex: PRINT)
    else if (strcmp(op, "PRINT") == 0) {
        snprintf(line, sizeof(line), "PRINT");
        snprintf(comment + strlen(comment), sizeof(comment) - strlen(comment),
                 "affiche la mémoire");
    } else {
        fprintf(stderr, "[ERROR] Opération non supportée : %s\n", op);
        fclose(f);
        return;
    }

    fprintf(f, "%-20s %s\n", line, comment);
    fclose(f);
}
