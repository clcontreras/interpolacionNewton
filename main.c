#include "read_data.h"
#include "allocptr.h"
#include "printing.h"
#include "div_dif_table.h"
#include "Newton.h"
#include "interpolGSL.h"

int main() {
    unsigned int n;
    double *x;
    double *y;
    n = count_data_by_rows(0);
    double_ptr_alloc(&x,n);
    double_ptr_alloc(&y,n);
    read_two_col_data(x, y);
    print_two_col_data(n, x, y);
    double *T;
    double_ptr_alloc(&T,n*n);
    divided_differences(n, T, x, y);
    unsigned int grado=n-1;
    interpolNewton(grado, n, x, T);
    interpolGSL(n,x,y);
  return 0;
}
