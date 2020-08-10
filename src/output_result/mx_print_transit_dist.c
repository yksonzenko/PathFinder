#include "pathfinder.h"

void mx_print_transit_dist(t_matrix *matrix, t_islands *isl, int len) {
    mx_printstr("Distance: ");
    for (int j = len; j > 0; j--) {
        mx_printint(matrix->adj_matrix[matrix->dist_path[j]]
                    [matrix->dist_path[j - 1]]);
        if (j != 1)
            mx_printstr(" + ");
    }
    mx_printstr(" = ");
    mx_printint(matrix->adj_matrix[matrix->dist_path[len]]
                [matrix->dist_path[0]]);
    mx_printchar('\n');
}
