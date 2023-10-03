#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#define READ_BUF_SIZE 1024
int _putchar(char c);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
