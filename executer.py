MEMORY_SIZE = 256

def parse_instruction(line):
    # Ignore commentaires
    line = line.split(";")[0].strip()
    if not line:
        return None
    return line.split()

def execute_instruction(mem, instr):
    if not instr:
        return
    op = instr[0].upper()

    if op == "LOAD" and len(instr) == 3:
        addr, val = int(instr[1]), int(instr[2])
        mem[addr] = val

    elif op == "ADD" and len(instr) == 4:
        dest, src1, src2 = map(int, instr[1:])
        mem[dest] = mem[src1] + mem[src2]

    elif op == "SUB" and len(instr) == 4:
        dest, src1, src2 = map(int, instr[1:])
        mem[dest] = mem[src1] - mem[src2]

    elif op == "MUL" and len(instr) == 4:
        dest, src1, src2 = map(int, instr[1:])
        mem[dest] = mem[src1] * mem[src2]

    elif op == "DIV" and len(instr) == 4:
        dest, src1, src2 = map(int, instr[1:])
        if mem[src2] == 0:
            raise ZeroDivisionError(f"Division by zero at memory[{src2}]")
        mem[dest] = mem[src1] // mem[src2]

    elif op == "PRINT":
        print_memory(mem)

    else:
        raise ValueError(f"Instruction invalide : {' '.join(instr)}")

def print_memory(mem):
    print("Mémoire :")
    for i, val in enumerate(mem):
        if val != 0:
            print(f"[{i}] = {val}")

def main():
    memory = [0] * MEMORY_SIZE
    filename = "assembly.txt"

    with open(filename, "r") as f:
        for line_number, line in enumerate(f, 1):
            instr = parse_instruction(line)
            try:
                execute_instruction(memory, instr)
            except Exception as e:
                print(f"Erreur ligne {line_number} : {e}")
                break

    print("\n>>> État final de la mémoire :")
    print_memory(memory)

if __name__ == "__main__":
    main()
