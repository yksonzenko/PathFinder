#include "pathfinder.h"

void mx_error_duplicate_bridges(t_islands *isl, t_matrix *matrix) {
    for (int i = 0; i <= isl->count_words - 3; i += 3)
        for (int j = i + 3; j <= isl->count_words - 3; j += 3)
            if ((mx_strcmp(isl->isl_dist[i], isl->isl_dist[j]) == 0) &&
                (mx_strcmp(isl->isl_dist[i + 1], isl->isl_dist[j + 1]) == 0)) {
                    mx_printerr("error: duplicate bridges\n");
                    mx_clean_struct(isl, matrix);
                    exit(1);
            }
            else if ((mx_strcmp(isl->isl_dist[i], isl->isl_dist[j + 1]) == 0) &&
                (mx_strcmp(isl->isl_dist[i + 1], isl->isl_dist[j]) == 0)) {
                    mx_printerr("error: duplicate bridges\n");
                    mx_clean_struct(isl, matrix);
                    exit(1);
            }
}
