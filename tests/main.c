#include "../inc/libmx.h"

#include <stdio.h>
#include <string.h>

int main() {
    //MX_TOLOWER
    // printf("%c\n", mx_tolower('a'));
    // printf("%c\n", mx_tolower('b'));
    // printf("%c\n", mx_tolower('z'));
    // printf("%c\n", mx_tolower('A'));
    // printf("%c\n", mx_tolower('B'));
    // printf("%c\n", mx_tolower('Z'));

    // MX_TOUPPER
    // printf("%c\n", mx_toupper('a'));
    // printf("%c\n", mx_toupper('b'));
    // printf("%c\n", mx_toupper('z'));
    // printf("%c\n", mx_toupper('A'));
    // printf("%c\n", mx_toupper('B'));
    // printf("%c\n", mx_toupper('Z'));

    // MX_SQRT
    // printf("%d\n", mx_sqrt(-245));
    // printf("%d\n", mx_sqrt(-293232));
    // printf("%d\n", mx_sqrt(1));
    // printf("%d\n", mx_sqrt(0));
    // printf("%d\n", mx_sqrt(9));
    // printf("%d\n", mx_sqrt(4));
    // printf("%d\n", mx_sqrt(64));

    // MX_COUNT_WORDS
    // printf("%d\n", mx_count_words("  follow  *   the  white rabbit ", '*'));
    // printf("%d\n", mx_count_words("  follow  *   the  white rabbit ", ' '));
    // printf("%d\n", mx_count_words(NULL, ' '));

    // MX_BUBBLE_SORT
    // char *arr1[] = {"abc", "xyz", "ghi", "def"};
    // printf("%d\n", mx_bubble_sort(arr1, 4));
    // char *arr2[] = {"abc", "acb", "a"};
    // printf("%d\n", mx_bubble_sort(arr2, 3));

    // MX_BINARY_SEARCH
    // int count = 0;
    // char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    // printf("%d-%d\n", mx_binary_search(arr, 6, "ab", &count), count);
    // printf("%d-%d\n", mx_binary_search(arr, 6, "aBc", &count), count);
    // printf("%d-%d\n", mx_binary_search(arr, 6, "abdc", &count), count);

    // MX_ATOI
    // printf("%d\n", mx_atoi("21a"));
    // printf("%d\n", mx_atoi("a12s"));
    // printf("%d\n", mx_atoi("21"));
    // printf("%d\n", mx_atoi(" 21"));
    // printf("%d\n", mx_atoi("-5a"));
    // printf("%d\n", mx_atoi("-a5s"));

    // MX_MEMMEM
    // printf("%s\n", mx_memmem("Big big string", 14, "big", 3));

    // MX_MEMCCPY
    // char *dst1 = mx_strnew(20);
    // char *dst1_c = dst1;
    // printf("%s-%s\n", mx_memccpy(dst1, "Sergey", 'g', 10), dst1_c);
    // char *dst2 = malloc(20);
    // char *dst2_c = dst2;
    // printf("%s-%s\n", mx_memccpy(dst2, "SSSSSsSSSS", 's', 10), dst2_c);

    // MX_REPLACE_SUBSTR
    // printf("%s\n", mx_replace_substr("McDonalds", "alds", "uts"));
    // printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ta"));
    // printf("%s\n", mx_replace_substr("mamama", "mama", "papa"));
    // printf("%s\n", mx_replace_substr("mmmmmmmm", "mmm", "ppp"));

    // MX_COUNT_SUBSTR
    // printf("%d\n", mx_count_substr("yo, yo, yo Neo", "yo"));
    // printf("%d\n", mx_count_substr("StrStrStr", "Str"));
    // printf("%d\n", mx_count_substr("mamama", "mama"));
    // printf("%d\n", mx_count_substr("mamamama", "mama"));
    // printf("%d\n", mx_count_substr("mamama", NULL));
    // printf("%d\n", mx_count_substr(NULL, "mama"));
    // printf("%d\n", mx_count_substr(NULL, NULL));
    // printf("%d\n", mx_count_substr("mmmmmmmm", "mmm"));

    // MX_READ_LINE
    // char *s = NULL;
    // int fd_1 = open("test_1.txt", O_RDONLY);
    // printf("%d:%s\n", mx_read_line(&s, 20, 'f', fd_1), s);
    // mx_strdel(&s);
    // printf("%d:%s\n", mx_read_line(&s, 35, 't', fd_1), s);
    // mx_strdel(&s);
    // printf("%d:%s\n", mx_read_line(&s, 4, '.', fd_1), s);
    // mx_strdel(&s);

    // printf("\n");

    // int fd_2 = open("test_2.txt", O_RDONLY);
    // int res = 0;
    // char *str = NULL;
    // while ((res = mx_read_line(&str, 20, 'f', fd_2)) > -1) {
    //     printf("%d:%s\n", res, str);
    //     mx_strdel(&str);
    // }

    // printf("\n");

    // int fd_3 = open("test_3.txt", O_RDONLY);
    // int r = 0;
    // char *st = NULL;
    // while ((r = mx_read_line(&st, 128, '\n', fd_3)) > -1) {
    //     printf("%d:%s\n", r, st);
    //     mx_strdel(&st);
    // }

    // printf("\n");

    // int fd_4 = open("test_4.txt", O_RDONLY);
    // int rt = 0;
    // char *sty = NULL;
    // while ((rt = mx_read_line(&sty, 128, 'f', fd_4)) > -1) {
    //     printf("%d:%s\n", rt, sty);
    //     mx_strdel(&sty);
    // }

    // MX_PRINT_STRARR
    // char *arr[] = {"S", "m", "a", "k", "o", "v", NULL};
    // mx_print_strarr(arr, " ");

    // MX_QUICKSORT
    // char *arr1[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
    // printf("%d\n", mx_quicksort(arr1, 0, 3));
    // for (int i = 0; i < 4; i++)
    //     mx_printstr_endl(arr1[i]);
    // printf("\n");
    // char *arr2[] = {"DMC", "Clint Eastwood", "Dr Brown", "Einstein", "Jessica", "Beef Tannen"};
    // printf("%d\n", mx_quicksort(arr2, 0, 5));
    // for (int i = 0; i < 6; i++)
    //     mx_printstr_endl(arr2[i]);
    // printf("\n");
    // char *arr3[] = {"a", "b", "x", "z", "r", "f", "q", "p", "o"};
    // printf("%d\n", mx_quicksort(arr3, 0, 8));
    // for (int i = 0; i < 9; i++)
    //     mx_printstr_endl(arr3[i]);

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
