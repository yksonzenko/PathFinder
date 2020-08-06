#include "pathfinder.h"

void mx_result_output(t_matrix *matrix, t_islands *isl) {

    mx_printstr("========================================\n");
    mx_printstr("Path: ");
    mx_printstr(isl->unique_isl[0]);
    mx_printstr(" -> ");
    mx_printstr(isl->unique_isl[1]);
    mx_printchar('\n');
    mx_printstr("========================================\n");
}
