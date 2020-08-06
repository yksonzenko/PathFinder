#include "pathfinder.h"

// int main(int argc, char *argv[]) {
// 	mx_file_absent(argv[1]);
// }

// int main(int argc, char* argv[]) {
// 	mx_invalid_num_args(argc);
// }

// int main(int argc, char *argv[]) {
// 	mx_file_empty(argv[1]);
// }

int main(int argc, char *argv[]) {
	t_islands *isl = (t_islands*)malloc(sizeof(t_islands));
	mx_error_handling(argc, argv, isl);
	t_matrix *matrix = (t_matrix*)malloc(sizeof(t_matrix));
	mx_adjacency_matrix(isl, matrix);
	mx_floyd_warshal_algorithm(matrix, isl);
	// system("leaks -q pathfinder");
	// mx_path_matrix(matrix, isl);
}
