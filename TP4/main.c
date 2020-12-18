#include<stdio.h>
#include <stdlib.h>
#include "tp4.h"

// EXERCICE 1

HEURE HeureDebut; HEURE HeureFin; HEURE Duree; int retenu = 0;

int main() {
	HeureDebut.heure = 12;
	HeureDebut.minute = 30;
	Duree.heure = 0;
	Duree.minute = 45;
	HeureFin.minute = (HeureDebut.minute + Duree.minute) % 60;   // On fait le reste de la division euclidienne des minutes par 60, ce qui donne le nombre de minutes qu'il reste en plus des heures
	if (HeureDebut.minute + Duree.minute >= 60) {                // S'il y a plus de 60 minutes, on convertit 60min en 1heure
		retenu = 1;
	}
	HeureFin.heure = (HeureDebut.heure + Duree.heure + retenu)%24; // Si on dépasse 23h59, on passe à 00h
	printf("HeureFin = %d : %d ", HeureFin.heure, HeureFin.minute);
}