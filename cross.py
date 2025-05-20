MEMORY_SIZE = 256
REGISTER_COUNT = 16

def parse_instruction(line):
    line = line.split(";")[0].strip()
    if not line:
        return None
    return line.split()

def find_free_register(reg):
    for i in range(len(reg)):
        if not reg[i]:
            return i
    return -1

def main():
    memory = [0] * MEMORY_SIZE
    reg_used = [0] * REGISTER_COUNT  # 0: libre, 1: utilisé
    var_to_reg = {}  # m[n] -> Rk
    file_in = "assembly.txt"
    file_out = "output.txt"

    with open(file_in, "r") as f, open(file_out, "w") as f_out:
        for line_number, line in enumerate(f, 1):
            instr = parse_instruction(line)
            if not instr:
                continue

            try:
                op = instr[0].upper()

                if op == "AFC":  # AFC addr val
                    addr, val = int(instr[1]), int(instr[2])
                    memory[addr] = val

                    if addr in var_to_reg:
                        r = var_to_reg[addr]
                    else:
                        r = find_free_register(reg_used)
                        if r == -1:
                            raise RuntimeError("Plus de registres disponibles")
                        var_to_reg[addr] = r
                        reg_used[r] = 1

                    f_out.write(f"AFC {r} {val}\n")

                elif op == "COP":  # COP dest src
                    dest, src = int(instr[1]), int(instr[2])

                    if src not in var_to_reg:
                        raise RuntimeError(f"Source {src} pas initialisé")

                    rsrc = var_to_reg[src]

                    if dest in var_to_reg:
                        rdest = var_to_reg[dest]
                    else:
                        rdest = find_free_register(reg_used)
                        if rdest == -1:
                            raise RuntimeError("Plus de registres disponibles")
                        var_to_reg[dest] = rdest
                        reg_used[rdest] = 1

                    f_out.write(f"COP {rdest} {rsrc}\n")

                elif op in {"ADD", "SUB", "MUL", "DIV"}:
                    dest, src1, src2 = map(int, instr[1:])  

                    if src1 not in var_to_reg or src2 not in var_to_reg:
                        raise RuntimeError(f"Opérandes {src1} ou {src2} non initialisées")

                    r1 = var_to_reg[src1]
                    r2 = var_to_reg[src2]

                    if dest in var_to_reg:
                        rdest = var_to_reg[dest]
                    else:
                        rdest = find_free_register(reg_used)
                        if rdest == -1:
                            raise RuntimeError("Plus de registres disponibles")
                        var_to_reg[dest] = rdest
                        reg_used[rdest] = 1

                    f_out.write(f"{op} {rdest} {r1} {r2}\n")


                else:
                    f_out.write(f"# Instruction inconnue : {' '.join(instr)}\n")

            except Exception as e:
                print(f"[Erreur ligne {line_number}] {e}")
                break
    print("Cross-assemblage terminé. Fichier 'output.txt' généré.")

import re

def remap_registers(input_file="output.txt", output_file="output.txt"):
    reg_map = {}
    next_free_reg = 0
    lines = []

    # lecture
    with open(input_file, "r") as f:
        for line in f:
            # trouve tous les registres sous forme Rxx
            regs = re.findall(r'R(\d+)', line)
            
            for r in regs:
                r = int(r)
                if r not in reg_map:
                    reg_map[r] = next_free_reg
                    next_free_reg += 1
            lines.append(line)

    # réécriture
    with open(output_file, "w") as f:
        for line in lines:
            def replace_reg(match):
                old_r = int(match.group(1))
                return f'R{reg_map[old_r]}'
            new_line = re.sub(r'R(\d+)', replace_reg, line)
            f.write(new_line)

    print(f">>> Post-traitement terminé : registres réaffectés dans {output_file}")





if __name__ == "__main__":
    main()
    remap_registers()
    
