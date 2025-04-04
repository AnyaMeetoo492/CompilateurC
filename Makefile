CC = gcc
YACC = yacc -d
LEX = flex
EXEC = compil.exe

all: $(EXEC)

$(EXEC): y.tab.c lex.yy.c
	$(CC) $^ -o $@

lex.yy.c: compil.l
	$(LEX) $<

y.tab.c y.tab.h: compil.y
	$(YACC) $<

run: $(EXEC)
	./$(EXEC) < test.c

debug:
	$(YACC) -t -g -Wconflicts-sr -Wcounterexamples -Wall compil.y 
	$(LEX) compil.l
	$(CC) y.tab.c lex.yy.c -o $(EXEC) -DDEBUG -Wall
	dot -Tpdf y.gv > y.pdf
	@echo "Debug files generated: y.output, y.gv"

clean:
	rm -f y.tab.c y.tab.h lex.yy.c $(EXEC) y.output y.gv y.pdf
