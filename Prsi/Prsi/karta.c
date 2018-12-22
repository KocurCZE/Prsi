// obsahuje pouze implementace (definici) tìchto funkcí ... karta.h
#include "karta.h"

tKarta * vytvorKartu(enum tBarvaKarty barvaKarty,enum tTypKarty typKarty, char *nazev) {
	int random = (rand() % 4);

	switch (random)
	{
	case 0:	barvaKarty = CERVENE;
		break;
	case 1: barvaKarty = ZELENE;
		break;
	case 2: barvaKarty = KULE;
		break;
	case 3: barvaKarty = ZALUDY;
		break;
	}

	//return ;
}

void vypisKartu(tKarta *karta) {
	//printf("");
}