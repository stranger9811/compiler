a.out:	lex.yy.c Ccfg.tab.c
	gcc lex.yy.c Ccfg.tab.c -ll
lex.yy.c:	Ccfg.l Ccfg.tab.h
	flex Ccfg.l
Ccfg.tab.h:	Ccfg.y
	bison -d Ccfg.y
Ccfg.tab.c:	Ccfg.y
	bison -d Ccfg.y
