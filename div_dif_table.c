//
// Created by Claudio on 20/05/23.
//

#include <stdio.h>
#include "div_dif_table.h"

void divided_differences(unsigned int n, double *T, const double *x, const double *y) {
    unsigned int ldt = n;
    int j;
    for (int i = 0; i < n; i++) {
        j = i;
        T[i * ldt + j] = y[i];
    }
    for (int k = 1; k < n; k++) {
        printf("Orden %d\n", k);
        for (int i = k; i < n; i++) {
            j = i - k;
            T[i * ldt + j] = (T[i * ldt + j + 1] - T[(i - 1) * ldt + j]) / (x[i] - x[j]);
            printf("T(%d,%d)=%lf\n", i, j, T[i * ldt + j]);
        }
    }
}
