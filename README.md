# LIBMX

## Description

## Utils pack

|Function name|Description|
|-------------|----------------------------------------------|
|mx_printchar|Prints single character on the standard output.|
|mx_printchar_endl|Prints single character on the standard output followed by newline.|
|mx_print_unicode|Prints ASCII and multibyte characters on standard output.|
|mx_printstr|Prints string of characters on the standard output.|
|mx_printstr_endl|Prints string of characters on the standard output followed by newline.|
|mx_print_error|Prints string of characters on the error output.|
|mx_print_error_endl|Prints string of characters on the error output followed by newline.|
|mx_print_strarr|Prints array of strings on the standard output with delimiter between elements of array and the newline at the end of the output.|
|mx_printint|Prints integer values on the standard output.|
|mx_printint_endl|Prints integer values on the standard output followed by newline.|
|mx_pow|Computes the power of zero or positive integer.|
|mx_sqrt|Computes the non-negative square root of ```x``` in less than 2 seconds.|
|mx_nbr_to_hex|Converts an unsigned long number into a hexadecimal.|
|mx_hex_to_nbr|Converts a hexadecimal string into an unsigned long number.|
|mx_itoa|Converts integer to a string.|
|mx_atoi|Converts string to integer.|
|mx_ctoi|Concerts char to integer.|
|mx_foreach|Applies the function ```f``` for each element of the array with the given size.|
|mx_binary_search|Searches string in array with the given size using binary search algorithm.|
|mx_bubble_sort|Sorts an array of strings in place in lexicographical order using bubble sort algorithm.|
|mx_quicksort|Sorts an array of strings by their length in ascending order using algorithm of quick sort.|
|mx_get_arr_length|Returns length of the NULL-terminated array of strings.|
|mx_del_intarr|Takes pointer to 2D array of integers, deletes content of array, frees array memory and sets pointer to ```NULL```.|
|mx_intdel|Takes pointer to an array of integers, deletes content of array, frees array memory and sets pointer to ```NULL```.|
|mx_get_file_length|Returns file length in bytes.|

## String pack

|Function name|Description|
|-------------|----------------------------------------------------------|
|mx_strlen|Has the same behaviour as standard libc function ```strlen```.|
|mx_swap_char|Swap the characters of the string using pointers.|
|mx_str_reverse|Reverses string using pointers.|
|mx_strdel|Takes a pointer to string, then frees the string memory and sets string to NULL.|
|mx_del_strarr|Takes pointer to a ```NULL```-terminated array of strings, deletes content of array, frees array memory with free and sets pointer to ```NULL``` .|
|mx_get_char_index|Finds index of the first occurrence of character in a string.|
|mx_strdup|Has the same behaviour as standard libc function ```strdup```.|
|mx_strndup|Has the same behaviour as standard libc function ```strndup```.|
|mx_strcpy|Has the same behaviour as standard libc function ```strcpy```.|
|mx_strncpy|Has the same behaviour as standard libc function ```strncpy```.|
|mx_strcmp|Has the same behaviour as standard libc function ```strcmp```.|
|mx_strncmp|Has the same behaviour as standard libc function ```strncmp```.|
|mx_strcat|Has the same behaviour as standard libc function ```strcat```.|
|mx_strstr|Has the same behaviour as standard libc function ```strstr```.|
|mx_get_substr_index|Finds a index of substring.|
|mx_count_substr|Counts number of occurrences of substring in a string.|
|mx_count_words|Count words in the string.|
|mx_strnew|Allocates memory for a string of a specific size and one additional byte for terminating ```'\0'``` and initializes each character with ```'\0'```.|
|mx_strtrim|Creates new string without whitespace characters at the beginning and the end of the string.|
|mx_del_extra_spaces|Creates new string without whitespace characters in the beginning and at the end of a string. It puts in the new string exactly one space character between words.|
|mx_strsplit|Converts a string to the ```NULL```-terminated array of words.|
|mx_strjoin|Concatenates strings ```s1``` and ```s2``` into new string and terminates new string with ```'\0'```.|
|mx_file_to_str|Reads the data from file into the string.|
|mx_read_line|Reads the line from the given file descriptor into the ```lineptr``` until it reaches ```delim``` character or reaches the End Of File.|
|mx_replace_substr|Replaces all occurrences of ```sub``` in ```str``` with ```replace```.|
|mx_isspace|Has the same behaviour as standard libc function ```isdigit```.|
|mx_isalpha|Has the same behaviour as standard libc function ```isalpha```.|
|mx_isdigit|Has the same behaviour as standard libc function ```isdigit```.|
|mx_islower|Has the same behaviour as standard libc function ```islower```.|
|mx_isupper|Has the same behaviour as standard libc function ```isupper```.|

## Memory pack

## List pack
