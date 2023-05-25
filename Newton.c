//
// Created by Claudio on 20/05/23.
//
#include <stdio.h>
#include "Newton.h"
#include "tests.h"

void interpolNewton(unsigned int grado, unsigned int n, const double *x, const double *T)
                      {
    double producto;
    double suma;
    FILE * output_interp_Newton;
    output_interp_Newton= fopen("../interpolNewton","w");
    test_file_open(output_interp_Newton);
    int N=100;
    double delta_x=(x[n-1]-x[0])/N;
    double xint;
    for (int s=0; s<=N;s++){
        xint=x[0]+s*delta_x;
        suma=0.0;
        for (int k=0;k<=grado;k++){
            producto=1;
            for (int i=0; i<=k-1;i++) producto*=(xint-x[i]); //a*=5 equiv a=a*5
            suma+=T[k*n]*producto;
        }
        fprintf(output_interp_Newton,"%.5f %.5f\n",xint,suma);
    }
    fclose(output_interp_Newton);
}
