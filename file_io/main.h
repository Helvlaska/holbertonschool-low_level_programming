#ifndef READ_TEXTFILE_H
#define READ_TEXTFILE_H
#include <stddef.h>  /*pour size_t et ssize_t*/
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
