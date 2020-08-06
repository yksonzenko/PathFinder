#include "pathfinder.h"

//---
static void print_intarr(long **arr, int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            mx_printint(arr[i][j]);
            write(1, "\t", 1);
        }
	write(1, "\n", 1);
    }
} //---

void mx_floyd_warshal_algorithm(t_matrix *matrix, t_islands *isl) {
    mx_path_matrix(matrix, isl);

    for (int k = 0; isl->unique_isl[k]; k++) {
        for (int i = 0; isl->unique_isl[i]; i++) {
            for (int j = 0; isl->unique_isl[j]; j++) {
                if (matrix->adj_matrix[i][j] > matrix->adj_matrix[i][k] +
                    matrix->adj_matrix[k][j]) {
                        matrix->adj_matrix[i][j] = matrix->adj_matrix[i][k] +
                        matrix->adj_matrix[k][j];
                        matrix->path_matrix[i][j] = k;
                }
            }
        }
    }
    write(1, "\n", 1); //---
    print_intarr(matrix->adj_matrix, isl->count_unique_isl); //---
    write(1, "\n", 1); //---
    mx_print_intarr(matrix->path_matrix, isl->count_unique_isl); //---
    write(1, "\n", 1); //---
}
