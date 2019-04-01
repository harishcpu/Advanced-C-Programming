#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "colors.h"

#define MAXLINE 100

int main(int argc, char *argv[]);
int AddContact(FILE *);
int SearchContact(FILE *);
int EditContact(FILE *);
int DeleteContact(FILE *, int);
int PrintFile(FILE *);

char *my_getline(char *line, int val);
int find_data(char *, FILE*, int);
int delete_line(char *, char *, char *);
int edit_word(char *, char *, char *, char *);
