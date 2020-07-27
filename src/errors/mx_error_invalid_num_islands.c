#include "pathfinder.h"

void mx_error_invalid_num_islands(char *str) {
    int i;
    t_islands *isl = (t_islands*)malloc(sizeof(t_islands));

    if (*str != '\0') {
        for (i = 0; str[i] != '\n'; i++) {
            if (mx_isdigit(str[i]))
                isl->digit = mx_atoi(str);
        }
        str += mx_intlen(isl->digit);
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == '-' || str[i] == ',' || str[i] == '\n')
                str[i] = ' ';
        }
        isl->count_words = mx_count_words(str, ' ');
        // isl->isl_dist = (char **)malloc(sizeof(char *) * 1);
        isl->isl_dist = mx_strsplit(str, ' ');
        isl->unique_isl = (char **)malloc(sizeof(char *) * isl->count_words);
        // for (int i = 0; isl->isl_dist[i]!= NULL; i++) {
        //     for (int j = 0; isl->unique_isl[j] == NULL; j++) {
        //         if (isl->unique_isl[0] == NULL)
        //             isl->unique_isl[0] = isl->isl_dist[0];
        //     }
        // }
        // isl->unique_isl[0] = mx_strdup(isl->isl_dist[0]);
        // for (int j = 0; isl->unique_isl[j] != NULL; j++) {
        //     for (int i = 0; isl->unique_isl[i] != NULL; i++) {
        //         // if (mx_strcmp(isl->unique_isl[j], isl->isl_dist[i]) != 0)
        //         //     isl->unique_isl[j += 1] = isl->isl_dist[i];
        //     }
        //     printf("%s\n", isl->unique_isl[])
        // }

        // printf("%d\n", isl->count_words);
            // if ((i == 0 || mx_strcmp(isl->isl_dist[i],
            // isl->isl_dist[i - 1]) > 0) && (mx_strcmp(isl->isl_dist[i],
            // isl->isl_dist[i + 1]) < 0 )) {
            //     printf("%s\n", isl->isl_dist[i]);
            // }
        // }
        // printf("%d\n", counter);
        // mx_print_strarr(isl->isl_dist, " ");
        // mx_print_strarr(isl->unique_isl, " ");


        mx_bubble_sort(isl->isl_dist, isl->count_words);
        mx_print_strarr(isl->isl_dist, " ");
        // printf("%d",mx_atoi(isl->isl_dist[5]));

        int j = 0;
        for(int h = 0; h < isl->count_words; h++) {
            // printf("%d",mx_atoi(isl->isl_dist[h]));
            if(mx_atoi(isl->isl_dist[h]) == 0){
                if(isl->isl_dist[h+1] && mx_strcmp(isl->isl_dist[h], isl->isl_dist[h+1]) == 0) {
                    j++;
                }
                else{
                    printf("%s",isl->isl_dist[h]);
                    // isl->unique_isl[j-h] = isl->isl_dist[h];
                    j++;
                }
            }
            j++;
        }

        // mx_print_strarr(isl->unique_isl, " ");

}
}
