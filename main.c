#include "inc/libmx.h"

#include <stdio.h>

int main() {
    //MX_DEL_STRARR
    // char **arr = (char **)malloc(20 * sizeof(char *));
    // for (int i = 0; i < 20; i++) {
    //     arr[i] = mx_strdup("sos");
    // }
    // mx_del_strarr(&arr);

    //MX_FILE_TO_STR
    // char *str = mx_file_to_str("file.txt");
    // printf("%s\n", str);
    // printf("Block size : %zu\n", malloc_size(str));

    //MX_LIST_SIZE
    // t_list *list = mx_create_node("-");
    // mx_push_back(&list, "-");
    // printf("%d\n", mx_list_size(list));

    //MX_DEL_EXTRA_SPACES
    //printf("%s\n", mx_del_extra_spaces("       \n\t    SO    S  \r\tPorshe      \n"));

    //MX_HEX_TO_NBR
    // printf("%lu\n", mx_hex_to_nbr("12"));
    // printf("%lu\n", mx_hex_to_nbr("FFFFFFFFFFFFFF"));

    //MX_ITOA
    // printf("%s\n", mx_itoa(0));
    // printf("%s\n", mx_itoa(-2147483648));
    // printf("%s\n", mx_itoa(21));
    // printf("%s\n", mx_itoa(-212));
    // printf("%s\n", mx_itoa(9999));

    //MX_POW
    // printf("%f\n", mx_pow(2, 2));
    // printf("%f\n", mx_pow(20, 2));

    //MX_REALLOC
    char *str1 = (char *)malloc(5 * sizeof(char));
    char *str2 = (char *)malloc(5 * sizeof(char));
    printf("Block 1 size: %zu\n", malloc_size(str1));
    printf("Block 2 size: %zu\n", malloc_size(str2));
    str1 = realloc(str1, 10);
    printf("Block 1 size: %zu\n", malloc_size(str1));
    str2 = mx_realloc(str2, 10);
    printf("Block 2 size: %zu\n", malloc_size(str2));
    str1 = realloc(str1, 17);
    printf("Block 1 size: %zu\n", malloc_size(str1));
    str2 = mx_realloc(str2, 17);
    printf("Block 2 size: %zu\n", malloc_size(str2));
    str1 = realloc(str1, 33);
    printf("Block 1 size: %zu\n", malloc_size(str1));
    str2 = mx_realloc(str2, 33);
    printf("Block 2 size: %zu\n", malloc_size(str2));
    str1 = realloc(str1, 49);
    printf("Block 1 size: %zu\n", malloc_size(str1));
    str2 = mx_realloc(str2, 49);
    printf("Block 2 size: %zu\n", malloc_size(str2));
    printf("---------------\n");
    str1 = realloc(str1, 48);
    printf("Block 1 size: %zu\n", malloc_size(str1));
    str2 = mx_realloc(str2, 48);
    printf("Block 2 size: %zu\n", malloc_size(str2));

    system("leaks a.out");
    return 0;
}
