#include "pathfinder.h"

void mx_print_direct_route(t_matrix *matrix, t_islands *isl, int row,
                            int col) {
    mx_printstr("Route: ");
    mx_printstr(isl->unique_isl[row]);
    mx_printstr(" -> ");
    mx_printstr(isl->unique_isl[col]);
    mx_printchar('\n');
    mx_printstr("Distance: ");
    mx_printint(matrix->adj_matrix[row][col]);
    mx_printchar('\n');
}
