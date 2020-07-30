#ifndef PATHFINDER_H
#define PATHFINDER_H

#include "libmx.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct s_islands {
    char **isl_dist;
    char **unique_isl;
    int digit;
    int count_words;
    int count_unique_isl;
    long sum_dist;
} t_islands;

//---error_handling_pack---
void mx_error_handling(int argc, char **argv);

void mx_error_invalid_num_args(int argc);
void mx_error_file_exists(char *argv);
void mx_error_file_empty(char *argv);
char *mx_error_line1_not_digit(int *line_count, char *str, t_islands *isl);
void mx_error_line_invalid(int *line_count, char *str);
void mx_error_output_invalid_line_number(int *line_count);
void mx_error_invalid_num_islands(t_islands *isl, char *str);
void mx_error_same_island_in_line(t_islands *isl, int *line_count);
void mx_error_duplicate_bridges(t_islands *isl);
void mx_clean_struct(t_islands *isl);
void mx_error_bridge_length(t_islands *isl);


#endif
