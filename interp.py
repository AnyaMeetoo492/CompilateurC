
def exec(instruction:list[int,int,int,int],mem):
    mem[]
    match instruction[0]:
        case 1:
            return instruction[1]+instruction[2]
        case 2:
            print("MUL")
        case 3:
            print("SOU")
        case 4:
            print("DIV")
        case 5:
            print("COP")
        case 6:
            print("AFC")
        case 7:
            print("JMP")
        case 8:
            print("JMF")
        case 9:
            print("INF")
        case 10:
            print("SUP")
        case 11:
            print("EQU")
        case 12:
            print("PRI")
        case _:
            print("Instruction inconnue")

operation(1)  # Affiche: ADD



with open("assembly.txt","r") as f:
    instructions=[]
    for line in f:
        instructions.append(line.split(" "))

i=0
mem=[0 for i in range(20)]
while i < len(instructions):
