#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int intspec(va_list arg_list);
int decispec(va_list arg_list);
int FormSpec(char spec, va_list arg_list);
int print_percent(ty, char buf[], int fl, int wi, int pre, int s);
int print_string(ty, char buf[], int fl, int wi, int pre, int s);
#endif