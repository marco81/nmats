/*
 * nmats.c
 *
 *  Created on: Feb 25, 2009
 *      Author: Marco Luisi
 */
#include "nmats.h"
#include "matrix.h" // basta nel .h?

#define N 10 //massimo numero utenti, vedere di non usarlo

int main (int argc, char* argv[]) {
	int fd;
	int n;  // per ?
	char* users[N]; //define per numero massimo
					// OPPURE parsare il file e POI creare l'array
	//indispensabile l'array?
	char* buf; //servirà?

	if (argc != 2) {
		WRITELN("NMAT Server: errore, specificare una lista di utenti");

		exit(0); // guardare
	}

	fd = open(argv[1], O_RDONLY);  // 1 o 2?

	if (fd == -1) {
		printf("NMAT Server: errore in lettura della lista utenti %s", argv[1]);

		// !!!!!!!!gestione errore della open... file mancante, permessi..

		//exit(); // guarda return 1?
		return 1; // brutto
	}

	//potrebbe non servire a una cippa
	struct stat file;
	if (stat(argv[1],&file) == -1) { // preso dal lexicon
		printf("Cannot stat\n");
		return -1;
	}

 //da leggere il file, nuovo username ad ogni newline

//scandire per trovare num utenti









}


