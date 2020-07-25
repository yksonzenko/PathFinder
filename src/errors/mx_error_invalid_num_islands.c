#include "pathfinder.h"

void mx_error_invalid_num_islands(int *line_count, char *str) {
    int digit = 0;
    int i;
    char *buf = NULL;

    if (*str != '\0') {
        for (i = 0; str[i] != '\n'; i++) {
            digit = mx_atoi(str);
        }
        for (i += 1; str[i] != '\n'; i++) {
            buf = mx_strndup(str, '-');
        }
        printf("%s\n", buf);
    // for (i += 1; str[i] != '\n'; i++) {
    //     if (mx_isalpha(str[i]))
    //         buf[i] = str[i];
    // }
    // printf("%s\n", buf);
    }
}
