#include "pathfinder.h"

void mx_print_transit_route(t_matrix *matrix, t_islands *isl, int row,
                            int col) {
    int colomn = col;
    matrix->dist_path = (int *)malloc(sizeof(int) * 1000);
    int len = 0;
    int i = 0;

    while (matrix->path_matrix[row][colomn] != colomn) {
        matrix->dist_path[0] = col;
        mx_printstr(isl->unique_isl[row]);
        mx_printstr(" -> ");
        for (i += 1; matrix->path_matrix[row][colomn] != colomn; i++) {
            colomn = matrix->path_matrix[row][colomn];
            matrix->dist_path[i] = colomn;
            len++;
        }
        for (int j = len; j > 0; --j) {
            mx_printstr(isl->unique_isl[matrix->dist_path[j]]);
            mx_printstr(" -> ");
        }
        matrix->dist_path[i] = row;
        matrix->dist_path[len + 2] = -3;
        mx_printstr(isl->unique_isl[col]);
        mx_printchar('\n');
        mx_print_transit_dist(matrix, isl, len + 1);
    }
}
