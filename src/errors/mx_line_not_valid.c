#include "pathfinder.h"

static void my_error_output(int *line_count) {
    char *count;

    count = mx_itoa((int)(*line_count));
    mx_printerr("error: line ");
    mx_printerr(count);
    mx_printerr(" is not valid\n");
    if (count)
        free(count);
    exit(1);
}

char *mx_line_not_valid(int *line_count, char *str) {
    int i;

    if (*str != '\0') {
        if (str[0] == '\n')
            my_error_output(line_count);
        for (i = 0; str[i] != '-'; i++) {
            if (mx_isalpha(str[i]) == false)
                my_error_output(line_count);
        }
        for (i += 1; str[i] != ','; i++) {
            if (mx_isalpha(str[i]) == false)
                my_error_output(line_count);
        }
        for (i += 1; str[i] != '\n'; i++) {
            if (mx_isdigit(str[i]) == false)
                my_error_output(line_count);
        }
        // printf("%s\n", str);
        i += 1;
        mx_line_not_valid(line_count, str);
    }
    return 0;
}
