#include "pathfinder.h"

void mx_floyd_warshal_algorithm(t_matrix *matrix, t_islands *isl) {
    for (int k = 0; isl->unique_isl[k]; k++) {
        for (int i = 0; isl->unique_isl[i]; i++) {
            for (int j = 0; isl->unique_isl[j]; j++) {
                if (matrix->adj_matrix[i][j] > matrix->adj_matrix[i][k] +
                    matrix->adj_matrix[k][j]) {
                        matrix->adj_matrix[i][j] = matrix->adj_matrix[i][k] +
                        matrix->adj_matrix[k][j];
                }
            }
        }
    }
    write(1, "\n", 1);
    mx_print_intarr(matrix->adj_matrix, isl->count_unique_isl); //---
}
