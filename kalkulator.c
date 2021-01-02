#include <stdio.h>
#include "dodawanie.h"
#include "odejmowanie.h"
#include "mnozenie.h"
#include "dzielenie.h"
konflikt  dominik
potwierdzenie 1 dominik
commit 7 karol
int main(){
	int x,y;
	char c;
	printf("Podaj liczbe: ");
	scanf("%d %d",&x,&y);
	getchar();
	printf("jakie dzia³anie?(+,-,*,/) \n");
	scanf("%c", &c);
	
	if(c=='+'){
		printf("Wynik dodawania = %d", dodawanie(x,y));
	}
	if(c=='-'){
		printf("Wynik odejmowania = %d", odejmowanie(x,y));
	}
	if(c=='*'){
		printf("Wynik mnozenia = %d", mnozenie(x,y));
	}
	if(c=='/'){
		if(y!=0){
			printf("Wynik dzielenia = %d", dzielenie(x,y));
		}
		else{
			printf("Nie wolno dzielic przez 0");
		}
	}
	return 0;


	konflikt radek
	konflikt radek 2
}
