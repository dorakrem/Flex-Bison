%{
#define _GNU_SOURCE
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void yyerror(char const *S);
extern int yylineno;
extern int lineNumber;
extern char* yytext;
extern FILE *yyin;
int yylex();

int num_radio_buttons = 0;
int global_rbnum;

int global_max;
int global_progress;
int global_padding;
int global_buttonpadding;

char* relativeid;
char* linearid;
char* textviewid;
char* imageviewid;
char* buttonid;
char* progressbarid;
char* radiogroupid;
char* radiobuttonid;
char* firstradiobuttonid;
char* global_checkedbutton; 

%}

%define parse.error verbose
%union {
    char *str;
    int num;
}

%token TK_LINEARLAYOUT
%token TK_RELATIVELAYOUT
%token TK_TEXTVIEW
%token TK_IMAGEVIEW
%token TK_BUTTON
%token TK_RADIOGROUP
%token TK_RADIOBUTTON
%token TK_PROGRESSBAR
%token TK_ANDROID
%token TK_LAYOUT
%token TK_WIDTH
%token TK_HEIGHT
%token TK_ORIENTATION
%token TK_ID
%token TK_TEXT
%token TK_TEXTCOLOR
%token TK_PADDING
%token TK_SRC
%token TK_CHECKEDBUTTON
%token TK_MAX
%token TK_PROGRESS
%token TK_START
%token TK_END
%token TK_SL
%token TK_EQUAL
%token TK_COLON
%token TK_US
%token TK_QM
%token STRING
%token POS_INT
%token TK_RBNUM
%token WRAPCONTENT
%token MATCHPARENT
%type <string> STRING
%type <num> POS_INT

%start root

%%


root: Linear_Layout { printf("\n\nParsing completed successfully\n");} | Relative_Layout { printf("\n\nParsing completed successfully\n"); } 
;


Relative_Layout: TK_START TK_RELATIVELAYOUT TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_END Content_Relative TK_START TK_SL TK_RELATIVELAYOUT TK_END
  | TK_START TK_RELATIVELAYOUT TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING {relativeid=yylval.str;}TK_END Content_Relative TK_START TK_SL TK_RELATIVELAYOUT TK_END

  {if(strcmp(relativeid,textviewid)==0 || strcmp(relativeid,imageviewid)==0 || strcmp(relativeid,buttonid)==0 || strcmp(relativeid,progressbarid)==0 || strcmp(imageviewid,textviewid)==0 || strcmp(imageviewid,buttonid)==0 || strcmp(imageviewid,progressbarid)==0 || strcmp(buttonid,textviewid)==0 || strcmp(buttonid,progressbarid)==0 || strcmp(progressbarid,textviewid)==0 || strcmp(linearid,relativeid)==0 || strcmp(linearid,textviewid)==0 || strcmp(linearid,imageviewid)==0 || strcmp(linearid,buttonid)==0 || strcmp(linearid,progressbarid)==0 ){printf("\n\nError: IDs must be different!");exit(1);};}

  | TK_START TK_RELATIVELAYOUT TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_SL TK_END
  |TK_START TK_RELATIVELAYOUT TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING{relativeid=yylval.str;} TK_SL TK_END 

  {if(strcmp(relativeid,textviewid)==0 || strcmp(relativeid,imageviewid)==0 || strcmp(relativeid,buttonid)==0 || strcmp(relativeid,progressbarid)==0 || strcmp(imageviewid,textviewid)==0 || strcmp(imageviewid,buttonid)==0 || strcmp(imageviewid,progressbarid)==0 || strcmp(buttonid,textviewid)==0 || strcmp(buttonid,progressbarid)==0 || strcmp(progressbarid,textviewid)==0 || strcmp(linearid,relativeid)==0 || strcmp(linearid,textviewid)==0 || strcmp(linearid,imageviewid)==0 || strcmp(linearid,buttonid)==0 || strcmp(linearid,progressbarid)==0 ){printf("\n\nError: IDs must be different!");exit(1);};}
  ;



Linear_Layout: TK_START TK_LINEARLAYOUT TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_END Content_Linear TK_START TK_SL TK_LINEARLAYOUT TK_END
  | TK_START TK_LINEARLAYOUT TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type optional_attributes_Linear TK_END Content_Linear TK_START TK_SL TK_LINEARLAYOUT TK_END 
  ;

type: WRAPCONTENT | MATCHPARENT | POS_INT {if(yylval.num==0){printf("\n\nError: android:layout:height and android:layout_width must be strictly greater than 0\nLine: %d",lineNumber);exit(1);};}
;

optional_attributes_Linear: TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING {linearid=yylval.str;}
					| TK_ANDROID TK_COLON TK_ORIENTATION TK_EQUAL STRING  
  					| TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING {linearid=yylval.str;} TK_ANDROID TK_COLON TK_ORIENTATION TK_EQUAL STRING 
  					| TK_ANDROID TK_COLON TK_ORIENTATION TK_EQUAL STRING TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING {linearid=yylval.str;}
  					;


Content_Relative:Content
				|Content_Relative Content
				;


Content_Linear:Content
			   |Content_Linear Content
			   ;


Content: Relative_Layout |Linear_Layout |Text_View |Image_View |button |Radio_Group |Progress_Bar;

Text_View: TK_START TK_TEXTVIEW TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_ANDROID TK_COLON TK_TEXT TK_EQUAL STRING TK_SL TK_END
	| TK_START TK_TEXTVIEW TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_ANDROID TK_COLON TK_TEXT TK_EQUAL STRING optional_attributes_TextView TK_SL TK_END
	;



optional_attributes_TextView: TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING{textviewid=yylval.str;}
							  |TK_ANDROID TK_COLON TK_TEXTCOLOR TK_EQUAL STRING 
							  |TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING {textviewid=yylval.str;}TK_ANDROID TK_COLON TK_TEXTCOLOR TK_EQUAL STRING
							  |TK_ANDROID TK_COLON TK_TEXTCOLOR TK_EQUAL STRING TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING{textviewid=yylval.str;}
							  ;


Image_View: TK_START TK_IMAGEVIEW TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_ANDROID TK_COLON TK_SRC TK_EQUAL STRING TK_SL TK_END
	| TK_START TK_IMAGEVIEW TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_ANDROID TK_COLON TK_SRC TK_EQUAL STRING optional_attributes_ImageView TK_SL TK_END {if(global_padding==0) {printf("\n\nError: android:padding must be strictly greater than 0 \nLine: %d",lineNumber-1);exit(1);};}
	;



optional_attributes_ImageView: TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING {imageviewid=yylval.str;}
							  |TK_ANDROID TK_COLON TK_PADDING TK_EQUAL POS_INT{global_padding=yylval.num;}
							  |TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING {imageviewid=yylval.str;}TK_ANDROID TK_COLON TK_PADDING TK_EQUAL POS_INT{global_padding=yylval.num;}
							  |TK_ANDROID TK_COLON TK_PADDING TK_EQUAL POS_INT{global_padding=yylval.num;} TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING{imageviewid=yylval.str;}
							  ;


button: TK_START TK_BUTTON TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_ANDROID TK_COLON TK_TEXT TK_EQUAL STRING TK_SL TK_END
	| TK_START TK_BUTTON TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_ANDROID TK_COLON TK_TEXT TK_EQUAL STRING optional_attributes_Button TK_SL TK_END{if(global_buttonpadding==0) {printf("\n\nError: android:padding must be strictly greater than 0\nLine: %d",lineNumber-1);exit(1);};}
	;



optional_attributes_Button: TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING {buttonid=yylval.str;}
							  |TK_ANDROID TK_COLON TK_PADDING TK_EQUAL POS_INT{global_buttonpadding=yylval.num;}
							  |TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING {buttonid=yylval.str;}TK_ANDROID TK_COLON TK_PADDING TK_EQUAL POS_INT{global_buttonpadding=yylval.num;}
							  |TK_ANDROID TK_COLON TK_PADDING TK_EQUAL POS_INT{global_buttonpadding=yylval.num;} TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING{buttonid=yylval.str;}
							  ;



Radio_Group:  TK_START TK_RADIOGROUP TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_ANDROID TK_COLON TK_RBNUM TK_EQUAL POS_INT{global_rbnum = yylval.num;}TK_END RadioButtons TK_START TK_SL TK_RADIOGROUP TK_END 
			|TK_START TK_RADIOGROUP TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_ANDROID TK_COLON TK_RBNUM TK_EQUAL POS_INT{global_rbnum = yylval.num;} optional_attributes_RadioGroup TK_END RadioButtons TK_START TK_SL TK_RADIOGROUP TK_END

			{if(global_rbnum!= num_radio_buttons){ printf("\n\nError: The number of radio buttons is %d, but android:rbnum is %d \nLine: %d", num_radio_buttons, global_rbnum,lineNumber);exit(1);}; }
			;

RadioButtons: Radio_Button { num_radio_buttons = 1; firstradiobuttonid = yylval.str;}
			  |RadioButtons Radio_Button {num_radio_buttons++;} {
			  char* radiobuttonids[num_radio_buttons];
			 for (int i = 1; i <= num_radio_buttons; i++) 
			{  radiobuttonids[i] = strdup(yylval.str);
			if(strcmp(global_checkedbutton,radiobuttonids[i])!=0 && strcmp(global_checkedbutton,firstradiobuttonid)!=0){printf("\n\n\nError: android:checkedButton must be the android:id of one of the Radio Buttons");exit(1);};
			if(strcmp(firstradiobuttonid,radiobuttonids[i])==0){printf("\n\nError: IDs must be different!");exit(1);};};}
			  ; 


optional_attributes_RadioGroup: TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING{radiogroupid=yylval.str;}
							  |TK_ANDROID TK_COLON TK_CHECKEDBUTTON TK_EQUAL STRING {global_checkedbutton = yylval.str;}
							  |TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING {radiogroupid=yylval.str;}TK_ANDROID TK_COLON TK_CHECKEDBUTTON TK_EQUAL STRING{global_checkedbutton = yylval.str; }
							  |TK_ANDROID TK_COLON TK_CHECKEDBUTTON TK_EQUAL STRING{global_checkedbutton = yylval.str;} TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING{radiogroupid=yylval.str;}
							  ;



Radio_Button: TK_START TK_RADIOBUTTON TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_ANDROID TK_COLON TK_TEXT TK_EQUAL STRING TK_SL TK_END
|TK_START TK_RADIOBUTTON TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_ANDROID TK_COLON TK_TEXT TK_EQUAL STRING TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING { radiobuttonid=yylval.str;}TK_SL TK_END
;


Progress_Bar: TK_START TK_PROGRESSBAR TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type TK_SL TK_END
|TK_START TK_PROGRESSBAR TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_WIDTH TK_EQUAL type TK_ANDROID TK_COLON TK_LAYOUT TK_US TK_HEIGHT TK_EQUAL type optional_attributes_ProgressBar TK_SL TK_END{if (global_progress <0 || global_progress > global_max) {printf("\n\nError: android:progress must be between 0 and android:max %d \nLine: %d",global_max,lineNumber-1);exit(1);};}
;



optional_attributes_ProgressBar: optional_attributes
								| optional_attributes optional_attributes_ProgressBar;

optional_attributes: TK_ANDROID TK_COLON TK_ID TK_EQUAL STRING {progressbarid=yylval.str;}
								|TK_ANDROID TK_COLON TK_MAX TK_EQUAL POS_INT{global_max = yylval.num;}
								|TK_ANDROID TK_COLON TK_PROGRESS TK_EQUAL POS_INT{global_progress=yylval.num;};

%%

//Εμφάνιση error όταν υπάρχει συντακτικό λάθος
void yyerror(char const *s) 
{
    fprintf(stderr,"\nError: %s\nLine: %d\nToken: %s\n", s, lineNumber, yytext);
	exit(1);
}	

int main(int argc,char *argv[]){

int token;
if(argc >1){

    yyin=fopen(argv[1],"r");
        if(yyin == NULL){

            perror ("ERROR");
            return -1;
        }
}

yyparse();
fclose (yyin);
return 0;
}