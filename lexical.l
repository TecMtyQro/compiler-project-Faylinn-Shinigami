
/* escáner léxico sencillo de Pascal */

%{
#include <math.h>
int yyerror(const char *s);
%}

DIGITO   [0-9]
ID       [A-Za-z][A-Za-z0-9]*

%%

{DIGITO}+   {
            printf( "Un entero: %s (%d)\n", yytext,
                    atoi( yytext ) );
            }

{DIGITO}+"."{DIGITO}*      {
            printf( "Un real: %s (%g)\n", yytext,
                    atof( yytext ) );
            }

if|then|begin|end|procedure|function|while|program|repeat|do|print|for|set|file|case|of|to|writeln|write|read|readln|type|cons|var|array|integer|string|real|char|boolean        {
            printf( "Una palabra reservada clave: %s\n", yytext );
            }

{ID}        printf( "Un identificador: %s\n", yytext );

"'"[^}\n]*"'"   printf( "Cadena o caracter: %s\n", yytext );

"+"|"-"|"*"|"/"|">="|"<="|"<>"|":="|".."|":"|">"|"<"|"="   printf( "Un operador: %s\n", yytext );

"{"[^}\n]*"}"     printf( "Comentario: %s\n", yytext );

";"               printf( "Semicolon: %s\n", yytext );

","               printf( "Coma: %s\n", yytext );

"."               printf( "Punto: %s\n", yytext );

"("               printf( "Abre paréntesis: %s\n", yytext );

")"               printf( "Cierra paréntesis: %s\n", yytext );

"["               printf( "Abre corchete: %s\n", yytext );

"]"               printf( "Cierra corchete: %s\n", yytext );

"'"               printf( "Apóstrofe: %s\n", yytext );


[ \b\t\n]+          /* se come los espacios en blanco */             

.                 yyerror("Caracter no reconocido: "); printf( "%s\n", yytext );

%%

int yyerror(char const * s) {
  fprintf(stderr, "%s", s);
}

void main( argc, argv )
int argc;
char **argv;
    {
    ++argv, --argc;  /* se salta el nombre del programa */
    if ( argc > 0 )
            yyin = fopen( argv[0], "r" );
    else
            yyin = stdin;
    
    yylex();
    }