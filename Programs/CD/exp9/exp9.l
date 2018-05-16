 
letter [a-z A-Z]  
digit[0-9]  
%%
	if({printf("\n keyword;%s",yytext);}
	else{printf("\n keyword;%s",yytext);}
	for({printf("\n keyword;%s",yytext);}
	while({printf("\n keyword;%s",yytext);}
	do{printf("\n keyword;%s",yytext);}
	"+"({printf("\n keyword;%s",yytext);}
	"*"({printf("\n keyword;%s",yytext);}
	"<"{printf("\n keyword;%s",yytext);}
	">"{printf("\n keyword;%s",yytext);}
	"<="{printf("\n keyword;%s",yytext);}
	">="{printf("\n keyword;%s",yytext);}  
%%
 int yywrap()  
 {  
 return 1;  
 }  
 int main(int argc,char *argv[])  
{  
 yyin=fopen(argv[1],"r");  
 yylex();  
 fclose(yyin);  
 return 0;  
 }  

