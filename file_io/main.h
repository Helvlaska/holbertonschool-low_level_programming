#ifndef READ_TEXTFILE_H
#define READ_TEXTFILE_H
#include <stddef.h>  /*pour size_t et ssize_t*/
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
