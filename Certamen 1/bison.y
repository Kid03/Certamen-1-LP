%skeleton "lalr1.cc" /* -*- C++ -*- */
%require "3.0"
%{ 
	#include <stdio.h>
	#include <string>
	#include "Graph.h"

	using namespace std;

	int yylex();
	void yyerror(string s);
	Graph * graph ;
%} 

%union {
	string strVal;
	int intVal;
}

/* declaramos los tokens */

%token NEWPLACE
%token NEWARC
%token NEWTRANS
%token RMPLACE
%token RMARC
%token RMTRANS
%token SETTOKENS
%token SETPESO
%token MAZESOLVER
%token READWRITE
%token MUTUALEXCLUSION

%token <strVal> PALABRA
%token <intVal>	NUMERO

%% 
	INICIO
		: Expr
	;

	Expr 
		: NEWPLACE '(' PALABRA ')'
		{
			(*graph).newPlace($3);
		}
		| PALABRA NEWPLACE '(' PALABRA ')'
		{
			(*graph).newPlace($4);
		}
		| NEWPLACE '(' PALABRA ',' NUMERO ')'
		{
			(*graph).newPlace($3, $5);
		}
		| NEWARC '(' NUMERO ',' PALABRA ',' PALABRA ')'
		{
			(*graph).newArc($3, $5, $7);
		}
		| NEWTRANS '(' PALABRA ')'
		{
			(*graph).newTrans($3);
		}
		| RMPLACE '(' PALABRA ')'
		{
			(*graph).rmPlace($3);
		}
		| RMARC '(' PALABRA ',' PALABRA ')'
		{
			(*graph).rmPlace($3, $5);
		}
		| RMTRANS '(' PALABRA ')'
		{
			(*graph).rmPlace($3);
		}
		| SETTOKENS '(' PALABRA ',' NUMERO ')'
		{
			(*graph).setTokens($3, $5);
		}
		| SETPESO '(' NUMERO ',' PALABRA ',' PALABRA ')'
		{
			(*graph).setPeso($3, $5, $7);
		}
		| MAZESOLVER '(' PALABRA ',' PALABRA ')'
		{
			(*graph).mazeSolver($3, $5);
		}
		| READWRITE '(' ')'
		{
			delete graph;
			graph = new graph ();
			(*graph).readwrite();
		}
		| MUTUALEXCLUSION '(' ')'
		{
			delete graph;
			graph = new graph ();
			(*graph).mutualExclusion();
		}
	;
%% 

void yyerror(string s) { 
	std::cout << s <<endl;
	exit(0);
}

int yywrap(){
	 return 1;
}

int main(){
	graph = new Graph ();
	return (yyparse());
}