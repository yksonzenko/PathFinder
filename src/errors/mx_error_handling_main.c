#include "pathfinder.h"

void mx_error_handling(int argc, char **argv) {
    int line_count = 1;
    char *str = NULL;
    char *head = NULL;

    mx_error_invalid_num_args(argc);
    mx_error_file_exists(argv[1]);
    mx_error_file_empty(argv[1]);
    str = mx_file_to_str(argv[1]);
    head = str;
    // printf("%s", str);
    str = mx_error_line1_not_digit(&line_count, str);
    // printf("%s", str);
    // printf("%d\n", line_count);
    // printf("check\n");
    mx_error_line_invalid(&line_count, str);
    str = head;
    mx_error_invalid_num_islands(str);
}
