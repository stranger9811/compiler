a.out:	lex.yy.c Ccfg.tab.cpp
	g++ lex.yy.c Ccfg.tab.cpp -ll -std=c++11
lex.yy.c:	Ccfg.l Ccfg.tab.hpp resources.h
	flex Ccfg.l 
Ccfg.tab.hpp:	Ccfg.ypp resources.h
	bison -dv Ccfg.ypp
Ccfg.tab.cpp:	Ccfg.ypp resources.h
	bison -dv Ccfg.ypp
Ccfg.ypp:	CCfgBison
	cd CCfgBison
	make
	cp Ccfg.ypp ../Ccfg.ypp
