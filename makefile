a.out:	lex.yy.c Ccfg.tab.cpp
	g++ lex.yy.c Ccfg.tab.cpp -ll -D debug
lex.yy.c:	Ccfg.l Ccfg.tab.hpp
	flex Ccfg.l
Ccfg.tab.hpp:	Ccfg.ypp
	bison -dv Ccfg.ypp
Ccfg.tab.cpp:	Ccfg.ypp
	bison -dv Ccfg.ypp
