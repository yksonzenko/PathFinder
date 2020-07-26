#include "pathfinder.h"

void mx_error_invalid_num_islands(char *str) {
    int i;

    if (*str != '\0') {
        for (i = 0; str[i] != '\n'; i++) {
            if (mx_isdigit(str[i]))
                islands.digit = mx_atoi(str);
        }
        str += mx_intlen(islands.digit);
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == '-' || str[i] == ',' || str[i] == '\n')
                str[i] = ' ';
        }
        islands.count_words = mx_count_words(str, ' ');
        islands.isl_dist = (char **)malloc(islands.count_words + 1);
        islands.isl_dist = mx_strsplit(str, ' ');
        // printf("%d\n", islands.count_words);
    }
}
