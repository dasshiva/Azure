#include <stdio.h>
#include <stdlib.h>

#include <str.h>
#include <types.h>

#define BUFFERSIZE 100

char *getcode(FILE *tgt_file);
int keyword_type(const char *line);
void parse(const char *filename,const char* line,int line_num);