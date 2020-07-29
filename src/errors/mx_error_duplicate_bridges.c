#include "pathfinder.h"

void mx_duplicate_bridges(t_islands *isl, char *argv) {
    char *str = NULL;

    str = mx_file_to_str(argv);
    str += mx_intlen(isl->digit);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ',' || str[i] == '\n' || mx_isdigit(str[i]))
            str[i] = ' ';
    }
    isl->dup_bridge = mx_strsplit(str, ' ');
    // mx_print_strarr(isl->dup_bridge, "\n"); //---
    for (int i = 0; isl->dup_bridge[i]; i++) {
        for (int j = i + 1; isl->dup_bridge[j]; j++) {
            if (mx_strcmp(isl->dup_bridge[i], isl->dup_bridge[j]) == 0) {
                mx_printerr("error: duplicate bridges\n");
                // free(str);
                exit(1);
            }
        }
    }
    mx_print_strarr(isl->dup_bridge, " "); //---
    mx_del_strarr(&isl->dup_bridge);
    mx_del_strarr(&isl->isl_dist);

}
