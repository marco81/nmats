/*
 * matrix.h
 *
 *  Created on: Feb 26, 2009
 *      Author: marco
 */

#ifndef MATRIX_H_
#define MATRIX_H_

typedef struct matrix {
	char *id;
	int rows;   //si può cambiare una volta creata modificandola?
	int columns;
	double ** mat;
} matrix;  //serve?


//da fare un typedef come puntatore a matrice?

#endif /* MATRIX_H_ */
