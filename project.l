%{
#include "project.tab.h" 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//#define YYSTYPE char *
 int lineNumber = 1;
%}
%option noyywrap
%option yylineno


int [1-9][0-9]*|0
letter	[a-zA-Z]
string	\"([^\\\"]|\\.)*\"
digit	[0-9]
ws 	    [ \t\n\r]
nline   [\n]


%%
"<!--".*\n*"-->"	{printf("%s\t Comment Found", yytext);} 

"<"			{printf("%s",yytext); return TK_START;} 
">"			{printf("%s",yytext);return TK_END;}
"/"			{printf("%s",yytext);return TK_SL;}
"="			{printf("%s",yytext);return TK_EQUAL;}
":"			{printf("%s",yytext);return TK_COLON;}
"_"			{printf("%s",yytext);return TK_US;}
"\'"		{printf("%s",yytext);return TK_QM;}
{nline}	        {printf("\n"); lineNumber++;}


"LinearLayout"		{printf("%s",yytext); return TK_LINEARLAYOUT;}
"RelativeLayout"	{printf("%s",yytext);return TK_RELATIVELAYOUT;}
"TextView" 			{printf("%s",yytext);return TK_TEXTVIEW;}
"ImageView"			{printf("%s",yytext);return TK_IMAGEVIEW;}
"Button"			{printf("%s",yytext);return TK_BUTTON;}
"RadioGroup"		{printf("%s",yytext);return TK_RADIOGROUP;}
"RadioButton"		{printf("%s",yytext);return TK_RADIOBUTTON;}
"ProgressBar"		{printf("%s",yytext);return TK_PROGRESSBAR;}
"android"			{printf("%s",yytext);return TK_ANDROID;}
"layout"			{printf("%s",yytext);return TK_LAYOUT;}
"width"				{printf("%s",yytext);return TK_WIDTH;}
"height"			{printf("%s",yytext);return TK_HEIGHT;}
"orientation"		{printf("%s",yytext);return TK_ORIENTATION;}
"id"				{printf("%s",yytext);return TK_ID;}
"text"				{printf("%s",yytext);return TK_TEXT;}
"textColor"			{printf("%s",yytext);return TK_TEXTCOLOR;}
"padding"			{printf("%s",yytext);return TK_PADDING;}
"src"				{printf("%s",yytext);return TK_SRC;}
"checkedButton"		{printf("%s",yytext);return TK_CHECKEDBUTTON;}
"max"				{printf("%s",yytext);return TK_MAX;}
"progress"			{printf("%s",yytext);return TK_PROGRESS;}
"rbnum"			    {printf("%s",yytext);return TK_RBNUM;}
\"wrap_content\"		{printf("%s",yytext);return WRAPCONTENT;}
\"match_parent\"		{printf("%s",yytext);return MATCHPARENT;}


\"{int}\"    { printf("\%s",yytext); int num; if (sscanf(yytext+1, "%d", &num) == 1) { yylval.num = num; return POS_INT;}} 
{string} {printf("%s",yytext); yylval.str = strdup(yytext); return STRING;}
<<EOF>>  {return EOF;}
.		 ;
%%