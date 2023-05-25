//
// Created by Claudio on 20/05/23.
//
#include <stdio.h>
#include "tests.h"
#include "interpolGSL.h"
#include <gsl/gsl_spline.h>

void interpolGSL(unsigned int n, const double *x, const double *y){
    FILE * output_interp_GSL;
    output_interp_GSL= fopen("../interpolGSL","w");
    test_file_open(output_interp_GSL);

    int N=100;
    double delta_x=(x[n-1]-x[0])/N;

    gsl_interp_accel *acc;
    gsl_spline *spline;
    acc = gsl_interp_accel_alloc();
    spline = gsl_spline_alloc(gsl_interp_cspline, n);
    gsl_spline_init(spline, x, y, n);
    double xint;
    double fxint;
    for (int s=0; s<=N;s++) {
        xint = x[0] + s * delta_x;
        fxint=gsl_spline_eval(spline, xint, acc);
        fprintf(output_interp_GSL,"%.5f %.5f\n",xint, fxint);
    }
}
