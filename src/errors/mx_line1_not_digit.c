#include "pathfinder.h"

char *mx_line1_not_digit(int *line_count, char *str) {
    int j = 0;

    if (str[0] == '\n') {
        mx_printerr("error: line 1 is not valid\n");
        free(str);
        exit(1);
    }
    for (;str[j] != '\n'; j++) {
        if (!mx_isdigit(str[j])) {
            mx_printerr("error: line 1 is not valid\n");
            free(str);
            exit(1);
        }
    }
    (*line_count) += 1;
    return str + j + 1;
}
