//
// Created by Claudio on 21/05/23.
//

#include <stdlib.h>
#include "allocptr.h"
#include "tests.h"

void double_ptr_alloc(double **ptr, unsigned int size){
    *ptr=(double *)malloc(size*sizeof (double));
    ptr_alloc_test(*ptr);
}
