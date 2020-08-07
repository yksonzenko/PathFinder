#include "pathfinder.h"

void mx_print_transit_route(t_matrix *matrix, t_islands *isl, int row,
                            int col) {
    int colomn = col;
    matrix->dist_path = (int *)malloc(sizeof(int) * 10000);

    if (colomn != isl->unique_isl[row][col]) {
        matrix->dist_path = &matrix->path_matrix[row][colomn];
        // mx_printint(*matrix->dist_path);
        // mx_printchar('\n');
    }

}
