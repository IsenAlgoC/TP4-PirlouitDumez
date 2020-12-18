#include<stdio.h>
#include <stdlib.h>
#include <string.h>

//EXERCICE 4

int i = 0; char mot[] = "Laval"; char lettre1; char lettre2; int taille; int compteur = 0; int repetition;
int main() {
	taille = strlen(mot);
	printf("Le mot fait %d lettres \n", taille);
	if (taille % 2 == 0) {
		repetition = taille / 2;  // Si le nombre est pair, il faut faire taille/2 répétitions pour tester toutes les lettres 2 à 2
	}
	else {
		repetition = (taille - 1) / 2;  // Si le nombre est impair, il faut faire (taille-1)/2 pour tomber sur un nombre entier de répétitions
	}                                   // on n'a pas besoin de tester la lettre du milieu, car elle est identique à elle-même
	do {
		lettre1 = *(mot + i);           // la lettre la plus à gauche pas encore testé
		lettre2 = *(mot + taille -1 - i); // la lettre la plus à droite pas encore testé
		// printf(" Lettre 1 : %c Lettre 2 : %c", lettre1, lettre2);
		if (toupper(lettre1) == toupper(lettre2)) { // on passe en majuscule les deux lettres donc on ne prend pas en compte si c'est en majsucule ou minuscule
			compteur += 1; // si elles sont égales, on incrémente le compteur 
		}
		i++;
	} while (i < repetition);
	if (compteur == repetition) {    // s'il y a eu autant de lettres identiques que de répétitions,alors c'est un palindrôme
		printf("C'est un palindrome");
	}
	else {
		printf("Ce n'est pas un palindrome");
	}
}