
#include <limits.h>
#include <stdlib.h>
#define ARRAYSIZE(a) (sizeof(a) / sizeof((a)[0]))

#define SYMBOLTYPE2STR(t, s) do { \
        if (t == VARIABLE) s = "VARIABLE"; \
        else if (t == CONSTANT) s = "CONSTANT"; \
        else if (t == FUNCTION) s = "FUNCTION"; \
        else if (t == PARAMETER) s = "PARAMETER"; \
        else s = "UNKNOWN"; \
    } while (0)

#define SCOPETYPE2STR(t, s) do { \
        if (t == GLOBAL) s = "GLOBAL"; \
        else if (t == LOCAL) s = "LOCAL"; \
        else s = "UNKNOWN"; \
    } while (0)

#define DATATYPE2STR(t, s) do { \
        if (t == INT) s = "INT"; \
        else if (t == BOOL) s = "BOOL"; \
        else s = "UNKNOWN"; \
    } while (0)

#define BOOLTYPE2STR(t, s) do { \
        if (t == 0) s = "FALSE"; \
        else if (t == 1) s = "TRUE"; \
        else s = "UNKNOWN"; \
    } while (0)

enum symboltype {
    VARIABLE,
    CONSTANT,
    FUNCTION,
    PARAMETER
};

enum scopetype {
    GLOBAL,
    LOCAL
};

enum datatype {
    INT,
    BOOL,
};

typedef struct {
    char* name;
    enum symboltype type;
    enum scopetype scope;
    int initialised; // bool
    int value;
    enum datatype dtype;
} symbol;

int compare_symbol(const symbol* sym1, const symbol* sym2);

int get_index(const symbol* sym);

symbol * get_symbol(int index);

void add_symbol(symbol* sym);

void add_tmp(symbol* sym);

void remove_symbol(symbol* sym);

void remove_tmp();
void remove_all_tmp();

void modify_symbol(symbol* sym, symbol* new_sym);

void print_table();

int get_index_by_name(const char* name);

void free_table();