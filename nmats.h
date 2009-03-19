/*
 * nmats.h
 *
 *  Created on: Feb 26, 2009
 *      Author: marco
 */

/*
#ifndef NMATS_H_
#define NMATS_H_
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "matrix.h"


matrix new_mat(char *id, double data[]);  //vedere bene come passare valori
										  //per la creazione magari un array di array?


// o forse meglio fare che TUTTE le funzioni che stampano a video
// ritornino una stringa da far maneggiare a una apposita funzioni di stampa
// incornicia il tutto?

//e magari mettere i comandi del client proprio in un header comune a parte?


// E MAGARI INT INVECE CHE VOID PER CONTROLLO ESITI



void print(char* mat_id); // o direttamente la matrice? (nel pdf parla di nomemat)
						  // magari meglio  la stringa e poi ricavarne il puntatore

void display(); // visualizza le mat

void save(char* filename);

void load(char* filename);

void exit();

// l'help nel clien

matrix transp(matrix input, matrix output);

matrix add(matrix m1, matrix m2);

matrix sub(matrix m1, matrix m2);

matrix mul(matrix m1, matrix m2);





//#endif /* NMATS_H_ */
