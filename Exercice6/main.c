#include <stdio.h>
#include <stdlib.h>
#define TAILLETABLEAU 100

// EXERCICE 6
int main() {
	int tableau[TAILLETABLEAU];
	int* Curseur;
	Curseur = &tableau;
	int nombreValeur = 0;
	int valeur;
	int positionValeur[TAILLETABLEAU];
	int j = 0;
	srand(time(NULL));
	printf("Le tableau de valeurs est :\n");
	for (int i = 0; i < TAILLETABLEAU; i++) {
		tableau[i] = rand() % 21; // on génère un nombre aléatoire entre 0 et 20
		printf("%d ", tableau[i]);
	}
	printf("\nEntrer la valeur recherchee : ");
	scanf_s("%d",&valeur);
	for (int i = 0; i < TAILLETABLEAU; i++) {
		if (*(Curseur + i) == valeur) {     //on parcoure tout le tableau avec le curseur, si on trouve la valeur recherchée on garde sa position en mémoire dans le tableau positionValeur
			positionValeur[j] = i;
			j++;
		}
	}
	printf("\n La valeur recherchee est : %d\n", valeur);
	if (j > 0) {
		printf("La valeur recherchee a ete trouve en %d",positionValeur[0]);
		for (int k=1;k<j;k++) {
			printf(", et puis en %d", positionValeur[k]);
		}
		printf(".");

	}
	else {
		printf("La valeur %d n'a pas ete trouve dans le tableau.",valeur);
	}

}