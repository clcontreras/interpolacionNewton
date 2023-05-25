//
// Created by Claudio on 20/05/23.
//

#include <stdio.h>
#include <stdlib.h>
#include "tests.h"

void ptr_alloc_test(const double *pointer_to_allocate) {
    if (pointer_to_allocate == NULL) {
        printf("Error al reservar memoria\n");
        exit(1);
    }
}

void test_file_open(const FILE *pointer_to_file) {
    if (pointer_to_file == NULL) {
        printf("No se pudo abrir el archivo\n");
        exit(1);
    }
}
