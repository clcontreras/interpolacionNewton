//
// Created by Claudio on 20/05/23.
//
#include <stdio.h>
#include "printing.h"

void print_two_col_data(unsigned int n, const double *x, const double *y) {
    printf("Estos son los %d datos leidos:\n", n);
    for (int i = 0; i < n; i++) printf("%6.2lf  %6.2lf\n", x[i], y[i]);
}
