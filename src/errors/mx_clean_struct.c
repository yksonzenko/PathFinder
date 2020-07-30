#include "pathfinder.h"

void mx_clean_struct(t_islands *isl) {
    if (isl->isl_dist)
        mx_del_strarr(&isl->isl_dist);
    if (isl->unique_isl)
        mx_del_strarr(&isl->unique_isl);
}
