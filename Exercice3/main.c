#include<stdio.h>
#include <stdlib.h>
#include <string.h>
//EXERCICE 3
char nom[20] = { 0 };
char prenom[20] = { 0 };
int sexe;
int main() {
	printf("Entrez votre prenom");
	scanf_s("%s", &prenom, (unsigned int)_countof(prenom)); // on demande � l'utilisateur son pr�nom
	printf("Entrez votre nom");
	scanf_s("%s", nom, (unsigned int) _countof(nom));       // on demande � l'utilisateur son nom
	printf("Entrez le sexe H/F");
	do {
		sexe = _getch();
		sexe = toupper(sexe);  // On passe en majuscule la lettre entr�e par l'utilisateur, donc qu'il �crive h ou H est pareil
	} while (sexe != 'H' && sexe != 'F');
	if (sexe == 'H') {
		printf("Monsieur ");
	}
	else
	 {
		printf("Madame ");
	}
	 printf("%s %s",prenom, nom);
}