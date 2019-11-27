#include "inc/libmx.h"

#include <stdio.h>

int main() {
    // MX_QUICKSORT
    char *arr1[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
    printf("%d\n", mx_quicksort(arr1, 0, 3));
    for (int i = 0; i < 4; i++)
        mx_printstr_endl(arr1[i]);
    printf("\n");
    char *arr2[] = {"DMC", "Clint Eastwood", "Dr Brown", "Einstein", "Jessica", "Beef Tannen"};
    printf("%d\n", mx_quicksort(arr2, 0, 5));
    for (int i = 0; i < 6; i++)
        mx_printstr_endl(arr2[i]);

    // MX_STRNDUP
    // char *str = "sos";
    // printf("%s\n", mx_strndup(str, 2));

    // MX_STRSPLIT
    // char *str = "niLLlNO Lun0IjRDcEDX*JMVjsji       kl Z28x5AOUPxr darIIkMt3x4fesQgi1BpmoT5jTE9VJRwv45dW6vewloIGOKyHkEisW4aYeUefJNG8lyWpXjVL5";
    // mx_print_strarr(mx_strsplit(str, '*'), "\n");

    // MX_PRIN_UNICODE
    // for (int i = 0; i < 0xFFFF; i++) {
    //     mx_print_unicode(i);
    //     mx_printstr("\n");
    // }

    // MX_NBR_TO_HEX
    // printf("%s\n", mx_nbr_to_hex(0));
    // printf("%s\n", mx_nbr_to_hex(696));
    // printf("%s\n", mx_nbr_to_hex(496));

    // MX_REALLOC
    // char *str1 = (char *)malloc(0 * sizeof(char));
    // char *str2 = (char *)malloc(0 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // str1 = realloc(NULL, 0);
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = realloc(NULL, 0);
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // str1 = NULL;
    // str1 = realloc(str1, 10 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = NULL;
    // str2 = realloc(str2, 10 * sizeof(char));
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // printf("---------------\n");
    // str1 = realloc(str1, 10 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = mx_realloc(str2, 10 * sizeof(char));
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // str1 = realloc(str1, 17 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = mx_realloc(str2, 17 * sizeof(char));
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // str1 = realloc(str1, 33 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = mx_realloc(str2, 33 * sizeof(char));
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // str1 = realloc(str1, 49 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = mx_realloc(str2, 49 * sizeof(char));
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // str1 = realloc(str1, 65 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = mx_realloc(str2, 65 * sizeof(char));
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // printf("---------------\n");
    // str1 = realloc(str1, 63 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = mx_realloc(str2, 63 * sizeof(char));
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // str1 = realloc(str1, 47 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = mx_realloc(str2, 47 * sizeof(char));
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // str1 = realloc(str1, 46 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = mx_realloc(str2, 46 * sizeof(char));
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // str1 = realloc(str1, 31 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = mx_realloc(str2, 31 * sizeof(char));
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // str1 = realloc(str1, 16 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = mx_realloc(str2, 16 * sizeof(char));
    // printf("Block 2 size: %zu\n", malloc_size(str2));
    // str1 = realloc(str1, 15 * sizeof(char));
    // printf("Block 1 size: %zu\n", malloc_size(str1));
    // str2 = mx_realloc(str2, 15 * sizeof(char));
    // printf("Block 2 size: %zu\n", malloc_size(str2));

    // MX_DEL_STRARR
    // char **arr = (char **)malloc(20 * sizeof(char *));
    // for (int i = 0; i < 20; i++) {
    //     arr[i] = mx_strdup("sos");
    // }
    // mx_del_strarr(&arr);

    // MX_FILE_TO_STR
    // char *str = mx_file_to_str("file.txt");
    // printf("%s\n", str);
    // printf("Block size : %zu\n", malloc_size(str));

    // MX_LIST_SIZE
    // t_list *list = mx_create_node("-");
    // mx_push_back(&list, "-");
    // printf("%d\n", mx_list_size(list));

    // MX_DEL_EXTRA_SPACES
    // printf("%s\n", mx_del_extra_spaces("       \n\t    SO    S  \r\tPorshe      \n"));

    // MX_HEX_TO_NBR
    // printf("%lu\n", mx_hex_to_nbr("12"));
    // printf("%lu\n", mx_hex_to_nbr("FFFFFFFFFFFFFF"));

    // MX_ITOA
    // printf("%s\n", mx_itoa(0));
    // printf("%s\n", mx_itoa(-2147483648));
    // printf("%s\n", mx_itoa(21));
    // printf("%s\n", mx_itoa(-212));
    // printf("%s\n", mx_itoa(9999));

    // MX_POW
    // printf("%f\n", mx_pow(2, 2));
    // printf("%f\n", mx_pow(20, 2));

    system("leaks a.out");
    return 0;
}
