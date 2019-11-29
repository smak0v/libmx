#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
	lineptr = NULL;
	buf_size = 0;
	delim = 0;
	if (fd == 0)
		return 0;
	return 1;
}
