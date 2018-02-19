program: lexer.c register.h lex.yy.c
	gcc main.c lex.yy.c -o program


lex.yy.c: lexer.l
	flex lexer.l


parser.tab.c: parser.y
	bison -d parser.y


clean:
	rm -f lex.yy.c parser.tab.c parser.tab.h 
