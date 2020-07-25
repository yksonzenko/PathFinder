#include "pathfinder.h"

static void error_output_invalid_line(int *line_count) {
    char *count;

    count = mx_itoa((int)(*line_count));
    mx_printerr("error: line ");
    mx_printerr(count);
    mx_printerr(" is not valid\n");
    if (count)
        free(count);
    exit(1);
}

static void error_check_island_dist_exist(int *line_count, char *str) {
    int i;

    for (i = 0; str[i] != '\n'; i++) { //check whether both islands exist
        if (str[i] == '-' && (!mx_isalpha(str[i - 1]) || !mx_isalpha(str[i + 1])))
            error_output_invalid_line(line_count);
    }
    for (i = 0; str[i] != '\n'; i++) { //check whether distance exists
        if (str[i] == ',' && (!mx_isalpha(str[i - 1]) || !mx_isdigit(str[i + 1])))
            error_output_invalid_line(line_count);
    }
}

void mx_error_line_invalid(int *line_count, char *str) {
    int i;

    if (*str != '\0') {
        if (str[0] == '\n')
            error_output_invalid_line(line_count);
        error_check_island_dist_exist(line_count, str);
        for (i = 0; str[i] != '-'; i++) {
            if (!mx_isalpha(str[i]))
                error_output_invalid_line(line_count);
        }
        for (i += 1; str[i] != ','; i++) {
            if (!mx_isalpha(str[i]))
                error_output_invalid_line(line_count);
        }
        for (i += 1; str[i] != '\n'; i++) {
            if (!mx_isdigit(str[i]))
                error_output_invalid_line(line_count);
        }
    (*line_count) += 1;
    i += 1;
    mx_error_line_invalid(line_count, str + i);
    }
}
