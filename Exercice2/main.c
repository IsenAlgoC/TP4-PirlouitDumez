#include<stdio.h>
#include <stdlib.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

// EXERCICE 2

int MyTab1[TAILLETAB1];
int* MyPtr1;
*MyPtr1 = MyTab1 + TAILLETAB1;  // on initialise le pointeur à la dernière case du tableau

int main() {
	for (int i = 0; i < TAILLETAB1; i++) {  // on compte de 1 à 20 en utilisant les tableaux
		MyTab1[i] = i+1;
		printf("%d %c",MyTab1[i],SEPARATEUR);
	}
	printf("\n");
	for (int i = 0; i < TAILLETAB1; i++) {  // on décompte de 20 à 1 en utilisant les pointeurs
		MyPtr1--;
		printf("%d %c" ,*MyPtr1,SEPARATEUR);
	}
} 