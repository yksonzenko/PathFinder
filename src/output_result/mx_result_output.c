#include "pathfinder.h"

void mx_result_output(t_matrix *matrix, t_islands *isl) {

    for (int row = 0; row < isl->count_unique_isl; row++) {
        for (int col = row + 1; col < isl->count_unique_isl; col++) {
            mx_printstr("========================================\n");
            mx_printstr("Path: ");
            mx_printstr(isl->unique_isl[row]);
            mx_printstr(" -> ");
            mx_printstr(isl->unique_isl[col]);
            mx_printchar('\n');
            if (col == matrix->path_matrix[row][col])
                mx_print_direct_route(matrix, isl, row, col);
            else {
                mx_print_transit_route(matrix, isl, row, col);
                mx_print_transit_dist(matrix, isl, row, col);
            }
            mx_printstr("========================================\n");
        }
    }
}
