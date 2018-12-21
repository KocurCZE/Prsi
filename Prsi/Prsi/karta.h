#include "enums.h"

typedef struct karta {
	tBarvaKarty barvaKarty;
	tTypKarty typKarty;
	char nazev[50];// "Lidský název" karty pro výpisy, pø.: "Èervené eso"
	struct karta *dalsi;
} tKarta;

tKarta * vytvorKartu(enum tBarvaKarty barvaKarty, enum tTypKarty typKarty, char *nazev); // vrací adresu dynamické alokace karty, ukazatel dalsi se nastaví na NULL

void vypisKartu(tKarta *karta); //vypíše kartu na obrazovku