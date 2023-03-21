#include <stdio.h>
#define ROWS 2
#define COLS 3
int main () {
	//const int ROWS = 2;
	//const int COLS = 3;
	int m [ROWS][COLS] = {
						  {11, 12, 0},
						  {21, 22, 0}
	};
	int sumRow0 = 0;
	int sumRow1 = 0;
	printf ("Test v8.02: OK.\n"); 
	for ( int row=0;row<ROWS; row++ ) {
		for ( int col=0; col<COLS; col++) {
			printf ("%4d", m [row][col]);
		}
		printf ("\n");
	}
	for (int col=0; col<COLS; col++) {
		sumRow0 += m[0][col];
		sumRow1 += m[1] [col];
	}
	printf ("Sum of row 0: %d\n", sumRow0);
	printf ("Sum of row 1: %d\n", sumRow1);
	m[0][COLS - 1] = sumRow0;
	m[1][COLS - 1] = sumRow1;
	for (int row=0;row<ROWS;row++){
		for (int col=0; col<COLS;col++){
			printf ("%4d", m[row][col]);
		}
		printf ("\n");
	}
	return 0;
}


