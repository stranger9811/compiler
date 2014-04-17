a.out:	lex.yy.c Ccfg.tab.cpp
	g++ lex.yy.c codegen.cpp Ccfg.tab.cpp -ll -std=c++11 -g 
lex.yy.c:	Ccfg.l Ccfg.tab.hpp resources.h
	flex Ccfg.l 
Ccfg.tab.hpp:	Ccfg.ypp resources.h codegen.cpp
	bison -dv Ccfg.ypp
Ccfg.tab.cpp:	Ccfg.ypp resources.h codegen.cpp
	bison -dv Ccfg.ypp
Ccfg.ypp:	CCfgBison/assign_stmt2last  CCfgBison/block_stmt2expr  CCfgBison/brac2S  CCfgBison/ccfg_header CCfgBison/code2args  CCfgBison/main_function CCfgBison/S12init
	cd CCfgBison; $(MAKE)
	cp ./CCfgBison/Ccfg.ypp ./Ccfg.ypp
clean:
	rm  Ccfg.tab.cpp *.hpp *.ypp *.out CCfgBison/Ccfg.ypp
