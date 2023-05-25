//
// Created by Claudio on 20/05/23.
//
#include <stdio.h>
#include "read_data.h"
#include "tests.h"

unsigned int count_data_by_rows(int counter){
    counter = 0;
    FILE *data_input_file;
    data_input_file = fopen("../input_data", "r");
    test_file_open(data_input_file);
    fscanf(data_input_file, "%*[^\n]\n");
    while (!feof(data_input_file)) {
        fscanf(data_input_file, "%*[^\n]\n");
        counter++;
    }
    fclose(data_input_file);
    return counter;
}

void read_two_col_data(double *x, double *y) {
    FILE *data_input_file;
    data_input_file = fopen("../input_data", "r");
    test_file_open(data_input_file);
    fscanf(data_input_file, "%*[^\n]\n");
    double aux1;
    double aux2;
    int i = 0;
    while (!feof(data_input_file)) {
        fscanf(data_input_file, "%lf %lf", &aux1, &aux2);
        x[i] = aux1;
        y[i] = aux2;
        i++;
    }
    fclose(data_input_file);
}



