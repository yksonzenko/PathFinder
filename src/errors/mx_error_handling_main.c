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
    // printf("%d\n", line_count);
    // printf("check\n");
    mx_error_line_invalid(&line_count, str);
    str = head;
    // printf("%s", str);
    t_islands *isl = (t_islands*)malloc(sizeof(t_islands));
    mx_error_invalid_num_islands(isl, str);
    str = head;
    // printf("%s", str);
    mx_error_same_island_in_line(isl, &line_count);
    mx_duplicate_bridges(isl, argv[1]);
}
