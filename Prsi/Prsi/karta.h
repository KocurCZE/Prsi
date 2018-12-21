#include "enums.h"

typedef struct karta {
	tBarvaKarty barvaKarty;
	tTypKarty typKarty;
	char nazev[50];// "Lidsk� n�zev" karty pro v�pisy, p�.: "�erven� eso"
	struct karta *dalsi;
} tKarta;

// DOPSAT !!!!
tKarta * vytvorKartu(enum tBarvaKarty barvaKarty, enum tTypKarty typKarty, char *nazev); // vrac� adresu dynamick� alokace karty, ukazatel dalsi se nastav� na NULL

void vypisKartu(tKarta *karta); //vyp�e kartu na obrazovku