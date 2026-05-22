# CompilateurC

CompilateurC is a C language compiler implemented from scratch for educational and experimental purposes. This project demonstrates core compiler concepts such as lexing, parsing, semantic analysis, IR (Intermediate Representation) generation, and code emission.

## Features

- Lexical analysis (lexer/tokenizer for C source files)
- Syntax analysis (parser)
- Semantic analysis
- Code generation (target architecture, e.g., x86, or simple VM bytecode)
- Error checking and diagnostics
- Modular design for easy extension

## Repository Structure

```
CompilateurC/
├── src/               # Source code for the compiler
│   ├── lexer.c        # Lexical analyzer implementation
│   ├── parser.c       # Parser implementation
│   ├── semantic.c     # Semantic analysis module
│   ├── codegen.c      # Code generation module
│   └── ...
├── include/           # Header files for all modules
├── tests/             # Test cases and sample C files
├── build/             # Build outputs (ignored in version control)
├── Makefile           # Build script using make
├── README.md          # This file
└── ...
```

## Getting Started

### Prerequisites

- GCC or Clang (C compiler)
- Make
- (Optional) CMake if you want to use CMake instead

### Build Instructions

Run the following commands in your terminal:

```bash
# Clone the repository
git clone https://github.com/AnyaMeetoo492/CompilateurC.git
cd CompilateurC

# Build using Make
make

# (Optional) To clean build artifacts
make clean
```

### Running the Compiler

To compile a C source file:

```bash
./bin/compilateurc source_file.c
```

This will output either an assembly file (e.g., `source_file.s`) or an executable, depending on your codegen module setup.

### Testing

Test files are provided in the `tests/` directory. To run tests:

```bash
make test
# or manually:
./bin/compilateurc tests/sample1.c
```

## How the Compiler Works

1. **Lexical Analysis:** Splits the input `.c` file into tokens (keywords, identifiers, literals, symbols).
2. **Parsing:** Converts the stream of tokens into an abstract syntax tree (AST) representing program structure.
3. **Semantic Analysis:** Checks for type errors, variable declarations, etc.
4. **Code Generation:** Generates target code (assembly or bytecode).

Each stage is implemented in its own source module (see `/src/`).

## Adding or Modifying Features

- **New language constructs:** Update parser and semantic analysis logic in `parser.c` and `semantic.c`.
- **New backend:** Add a new codegen module, e.g., `codegen_mips.c`, and update build scripts.
- **Tests:** Add tests in the `tests/` directory.

## Troubleshooting

- If you get compilation errors, ensure your environment meets the prerequisites.
- Use `make clean` to remove old build artifacts before rebuilding.
- Check comments in `src/` files for implementation details.
