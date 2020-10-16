Use the cygwin64 Terminal and type the following commands:
1. flex -l --debug tryf.l
2. bison -dv --debug -t tryb.y
3. gcc tryb.tab.c lex.yy.c expression.c -o test -lfl -DYYDEBUG
4. ./test.exe test.py
