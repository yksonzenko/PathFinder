#include "pathfinder.h"

static int get_unisl_index(char *island, t_islands *isl) {
    for (int j = 0; j < isl->count_unique_isl; j++){
        if (mx_strcmp(island, isl->unique_isl[j]) == 0)
            return j;
    }
    return 0;
}

void mx_path_matrix(t_matrix *matrix, t_islands *isl) {
    matrix->path_matrix = (int **)malloc(sizeof(int *) * isl->count_unique_isl);
    for (int h = 0; isl->unique_isl[h]; h++) {
        matrix->path_matrix[h] = (int *)malloc(sizeof(int) *
        isl->count_unique_isl);
    }
    for (int i = 0; i < isl->count_unique_isl; i++) {
        for (int j = 0; j < isl->count_unique_isl; j++)
            matrix->path_matrix[i][j] = j;
    }
}
