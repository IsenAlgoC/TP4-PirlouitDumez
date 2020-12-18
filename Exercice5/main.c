#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// EXERCICE 5
int main() {
	char phrase[1024];
	int mots = 1;
	float longueur = 0;
	int i = 0;
	float moyenne;
	int tailleMax = 1024;
	gets_s(phrase, tailleMax);  // on demande à l'utilisateur d'entrer la phrase
	printf("La phrase est : %s", phrase);
	while (phrase[i] != 0) {
		if (phrase[i] == ' ') {  // à chaque nouvel espace, on augmente le nombre de mots de 1
			mots++;
		}
		else {
			longueur+=1;         //à chaque nouvelle lettre, on augmente le nombre de lettres de 1
		}
		i++;
	}
	moyenne = longueur / mots;  // la longueur moyenne d'un mot est le nombre de lettres totales divisé par le nombre de mots
	printf("\n Il y a %d mots de taille moyenne %.3f lettres", mots,moyenne);
}