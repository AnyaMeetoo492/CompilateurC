#include <stdio.h>
#include <stdlib.h>

#define MAX_OPERANDS 3
#define MAX_INSTRUCTIONS 100

// Enum des codes d'opérations
typedef enum {
    OP_ADD = 1,
    OP_MUL = 2,
    OP_SOU = 3,
    OP_DIV = 4,
    OP_COP = 5,
    OP_AFC = 6,
    OP_JMP = 7,
    OP_JMF = 8,
    OP_INF = 9,
    OP_SUP = 10, // A = 10
    OP_EQU = 11, // B = 11
    OP_PRI = 12  // C = 12
} OpCode;

// Structure d'une instruction
typedef struct {
    OpCode code;           // Code opération (1 à 12)
    int operands[MAX_OPERANDS]; // Jusqu’à 3 opérandes (int)
    int operand_count;     // Nombre d'opérandes
} Instruction;

// Ajoute une instruction
Instruction create_instruction(OpCode code, int op1, int op2, int op3, int count) {
    Instruction inst;
    inst.code = code;
    inst.operand_count = count;
    inst.operands[0] = op1;
    inst.operands[1] = op2;
    inst.operands[2] = op3;
    return inst;
}

// Affiche une instruction
void print_instruction(const Instruction* inst) {
    printf("%d", inst->code);
    for (int i = 0; i < inst->operand_count; i++) {
        printf(" %d", inst->operands[i]);
    }
    printf("\n");
}
// Écrit toutes les instructions dans un fichier texte
void write_instructions_to_file(const char* filename, const Instruction* program, int instruction_count) {
    FILE* file = fopen(filename, "w");
    if (!file) {
        perror("Erreur lors de l'ouverture du fichier");
        return;
    }

    for (int i = 0; i < instruction_count; i++) {
        fprintf(file, "%d", program[i].code);
        for (int j = 0; j < program[i].operand_count; j++) {
            fprintf(file, " %d", program[i].operands[j]);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    printf("Instructions écrites dans le fichier '%s'\n", filename);
}

int main() {
    Instruction program[MAX_INSTRUCTIONS];
    int instruction_count = 0;

    // Exemple : ADD 250 = 50 + 55 → 1 250 50 55
    program[instruction_count++] = create_instruction(OP_ADD, 250, 50, 55, 3);

    // MUL 300 = 250 * 2 → 2 300 250 2
    program[instruction_count++] = create_instruction(OP_MUL, 300, 250, 2, 3);

    // COP 100 = 300 → 5 100 300
    program[instruction_count++] = create_instruction(OP_COP, 100, 300, 0, 2);

    // AFC 200 = 42 → 6 200 42
    program[instruction_count++] = create_instruction(OP_AFC, 200, 42, 0, 2);

    // JMP 10 → 7 10
    program[instruction_count++] = create_instruction(OP_JMP, 10, 0, 0, 1);

    // JMF 1 20 → 8 1 20
    program[instruction_count++] = create_instruction(OP_JMF, 1, 20, 0, 2);

    // INF 1 = (50 < 60) → 9 1 50 60
    program[instruction_count++] = create_instruction(OP_INF, 1, 50, 60, 3);

    // SUP 2 = (70 > 30) → 10 2 70 30
    program[instruction_count++] = create_instruction(OP_SUP, 2, 70, 30, 3);

    // EQU 3 = (42 == 42) → 11 3 42 42
    program[instruction_count++] = create_instruction(OP_EQU, 3, 42, 42, 3);

    // PRI 100 → 12 100
    program[instruction_count++] = create_instruction(OP_PRI, 100, 0, 0, 1);

    // Affiche toutes les instructions
    for (int i = 0; i < instruction_count; i++) {
        print_instruction(&program[i]);
    }
    write_instructions_to_file("assembly.txt",program,instruction_count);

    return 0;
}
