#include "pathfinder.h"

void mx_adjacency_matrix(t_islands *isl, t_matrix *matrix) {
    matrix->adj_matrix = (int **)malloc(sizeof(int *) * isl->count_unique_isl);
    for (int h = 0; h < isl->count_unique_isl; h++) {
        matrix->adj_matrix[h] = (int *)malloc(sizeof(int) *
        isl->count_unique_isl);
    }
    for (int i = 0; i < isl->count_unique_isl; i++) {
        for (int j = 0; j < isl->count_unique_isl; j++) {
            matrix->adj_matrix[i][j] = (long)INF;
            printf("%d ", matrix->adj_matrix[i][j]);
        }
    printf("\n");
    }
}
