#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);


#endif /* MAIN_H */
