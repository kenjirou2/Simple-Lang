#ifndef PARSE_H
#define PARSE_H

typedef int INT;
typedef float FLOAT;
typedef char CHARR;

#define FAKEINT(x) ((int)(x))
#define FAKEFLOAT(x) ((float)(x))
#define FAKECHAR(x) ((char)(x))

int is_digit(const char* string);
int digit(const char* string);
int is_float(const char* string);
int parse(const char* string);

#endif