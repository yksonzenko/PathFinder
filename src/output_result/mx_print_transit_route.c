#include "pathfinder.h"

void mx_print_transit_route(t_matrix *matrix, t_islands *isl, int row,
                            int col) {
    int colomn = col;
    matrix->dist_path = (int *)malloc(sizeof(int) * 1000);
    int len = 0;

    mx_printstr("Route: ");
    while (matrix->path_matrix[row][colomn] != colomn) {
        mx_printstr(isl->unique_isl[row]);
        mx_printstr(" -> ");
        for (int i = 1; matrix->path_matrix[row][colomn] != colomn; i++) {
            colomn = matrix->path_matrix[row][colomn];
            matrix->dist_path[i] = colomn;
            len++;
        }
        for (int j = len; j > 0; --j) {
            mx_printstr(isl->unique_isl[matrix->dist_path[j]]);
            mx_printstr(" -> ");
        }
        mx_printstr(isl->unique_isl[col]);
        mx_printchar('\n');
    }
}
