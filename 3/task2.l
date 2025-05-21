%{
#include "task2.tab.h"
%}

%%

[0-9]+	{ yylval = atoi(yytext); return NUMBER; } //int
[-+\n]	return *yytext;
[ \t]	;

%%

int yywrap(void) {
	return 1;
}
